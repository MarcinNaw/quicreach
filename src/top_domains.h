/*++

    Copyright (c) Microsoft Corporation.
    Licensed under the MIT License.

--*/

const char* TopDomains[] =
{
    // Known interop servers
    "quic.aiortc.org",
    "ietf.akaquic.com",
    "quic.ogre.com",
    "quic.rocks",
    "mew.org",
    "http3-test.litespeedtech.com",
    "msquic.net",
    "nghttp2.org",
    "cloudflare-quic.com",
    "pandora.cm.in.tum.de",
    "test.privateoctopus.com",
    "quant.eggert.org",
    "h3.stammw.eu",
    "quic.seemann.io",
    "quic.tech",
    "quicker.edm.uhasselt.be",
    "quic.examp1e.net",
    "h2o.examp1e.net",
    // Top-level domains - found on GitHub at https://gist.github.com/jgamblin/62fadd8aa321f7f6a482912a6a317ea3
    "google.com",
    "youtube.com",
    "facebook.com",
    "baidu.com",
    "yahoo.com",
    "amazon.com",
    "wikipedia.org",
    "google.co.in",
    "twitter.com",
    "qq.com",
    "live.com",
    "taobao.com",
    "bing.com",
    "google.co.jp",
    "msn.com",
    "yahoo.co.jp",
    "linkedin.com",
    "sina.com.cn",
    "instagram.com",
    "weibo.com",
    "vk.com",
    "yandex.ru",
    "google.de",
    "google.ru",
    "hao123.com",
    "ebay.com",
    "reddit.com",
    "google.co.uk",
    "google.com.br",
    "mail.ru",
    "t.co",
    "pinterest.com",
    "amazon.co.jp",
    "google.fr",
    "netflix.com",
    "gmw.cn",
    "tmall.com",
    "360.cn",
    "google.it",
    "microsoft.com",
    "onclickads.net",
    "google.es",
    "paypal.com",
    "sohu.com",
    "wordpress.com",
    "tumblr.com",
    "blogspot.com",
    "imgur.com",
    "xvideos.com",
    "google.com.mx",
    "naver.com",
    "stackoverflow.com",
    "apple.com",
    "chinadaily.com.cn",
    "fc2.com",
    "aliexpress.com",
    "imdb.com",
    "google.ca",
    "google.co.kr",
    "github.com",
    "ok.ru",
    "pornhub.com",
    "google.com.hk",
    "whatsapp.com",
    "diply.com",
    "jd.com",
    "amazon.de",
    "google.com.tr",
    "rakuten.co.jp",
    "craigslist.org",
    "office.com",
    "google.co.id",
    "kat.cr",
    "amazon.in",
    "tianya.cn",
    "blogger.com",
    "google.pl",
    "nicovideo.jp",
    "alibaba.com",
    "soso.com",
    "pixnet.net",
    "google.com.au",
    "go.com",
    "amazon.co.uk",
    "xhamster.com",
    "dropbox.com",
    "google.com.tw",
    "outbrain.com",
    "xinhuanet.com",
    "cntv.cn",
    "googleusercontent.com",
    "cnn.com",
    "ask.com",
    "coccoc.com",
    "booking.com",
    "bbc.co.uk",
    "popads.net",
    "youth.cn",
    "twitch.tv",
    "wikia.com",
    "microsoftonline.com",
    "quora.com",
    "chase.com",
    "adobe.com",
    "163.com",
    "360.com",
    "haosou.com",
    "google.com.pk",
    "google.co.th",
    "google.com.eg",
    "google.com.ar",
    "youku.com",
    "google.com.sa",
    "bbc.com",
    "flipkart.com",
    "alipay.com",
    "bongacams.com",
    "adf.ly",
    "nytimes.com",
    "google.nl",
    "sogou.com",
    "livedoor.jp",
    "daum.net",
    "txxx.com",
    "amazon.cn",
    "espn.go.com",
    "ebay.co.uk",
    "ettoday.net",
    "bankofamerica.com",
    "china.com",
    "indiatimes.com",
    "myway.com",
    "bilibili.com",
    "walmart.com",
    "ebay.de",
    "china.com.cn",
    "godaddy.com",
    "dailymail.co.uk",
    "buzzfeed.com",
    "zillow.com",
    "xnxx.com",
    "salesforce.com",
    "dailymotion.com",
    "wellsfargo.com",
    "detail.tmall.com",
    "steampowered.com",
    "steamcommunity.com",
    "nametests.com",
    "google.co.ve",
    "theguardian.com",
    "google.com.ua",
    "indeed.com",
    "ameblo.jp",
    "aol.com",
    "etsy.com",
    "globo.com",
    "google.co.za",
    "yelp.com",
    "amazonaws.com",
    "huffingtonpost.com",
    "tudou.com",
    "so.com",
    "zhihu.com",
    "soundcloud.com",
    "tripadvisor.com",
    "google.gr",
    "varzesh3.com",
    "avito.ru",
    "onlinesbi.com",
    "vice.com",
    "cnzz.com",
    "directrev.com",
    "uol.com.br",
    "bet365.com",
    "weather.com",
    "mediafire.com",
    "uptodown.com",
    "cnet.com",
    "washingtonpost.com",
    "gfycat.com",
    "goo.ne.jp",
    "stackexchange.com",
    "force.com",
    "taboola.com",
    "google.com.co",
    "dmm.co.jp",
    "tuberel.com",
    "vimeo.com",
    "google.com.ng",
    "naver.jp",
    "feedly.com",
    "theladbible.com",
    "pixiv.net",
    "redtube.com",
    "detik.com",
    "homedepot.com",
    "torrentz.eu",
    "slideshare.net",
    "google.ro",
    "taringa.net",
    "foxnews.com",
    "target.com",
    "amazon.it",
    "google.com.pe",
    "flickr.com",
    "hclips.com",
    "google.be",
    "amazon.fr",
    "9gag.com",
    "kakaku.com",
    "blogspot.in",
    "ikea.com",
    "mega.nz",
    "ifeng.com",
    "udn.com",
    "web.de",
    "americanexpress.com",
    "iqiyi.com",
    "bp.blogspot.com",
    "fbcdn.net",
    "google.com.ph",
    "orange.fr",
    "comcast.net",
    "google.com.sg",
    "terraclicks.com",
    "youm7.com",
    "putlocker.is",
    "tribunnews.com",
    "gmx.net",
    "youporn.com",
    "deviantart.com",
    "nih.gov",
    "zol.com.cn",
    "ontests.me",
    "roblox.com",
    "doubleclick.net",
    "hdfcbank.com",
    "ozock.com",
    "tistory.com",
    "capitalone.com",
    "leboncoin.fr",
    "douyu.com",
    "google.cn",
    "51.la",
    "google.se",
    "spotify.com",
    "wikihow.com",
    "onet.pl",
    "babytree.com",
    "w3schools.com",
    "upornia.com",
    "snapdeal.com",
    "forbes.com",
    "google.at",
    "wix.com",
    "bestbuy.com",
    "livejournal.com",
    "mozilla.org",
    "rdsa2013.com",
    "xfinity.com",
    "handycafe.com",
    "groupon.com",
    "adnetworkperformance.com",
    "onedio.com",
    "thepiratebay.org",
    "skype.com",
    "github.io",
    "allegro.pl",
    "google.dz",
    "google.com.vn",
    "paytm.com",
    "twimg.com",
    "wikimedia.org",
    "icicibank.com",
    "t-online.de",
    "tokopedia.com",
    "popcash.net",
    "telegraph.co.uk",
    "usps.com",
    "slither.io",
    "wp.pl",
    "blog.jp",
    "google.ch",
    "webtretho.com",
    "irctc.co.in",
    "trello.com",
    "google.pt",
    "yesky.com",
    "xywy.com",
    "huanqiu.com",
    "eksisozluk.com",
    "blastingnews.com",
    "citi.com",
    "shutterstock.com",
    "rediff.com",
    "files.wordpress.com",
    "ups.com",
    "1688.com",
    "google.cl",
    "bitauto.com",
    "speedtest.net",
    "pandora.com",
    "adexc.net",
    "imzog.com",
    "google.ae",
    "2ch.net",
    "google.cz",
    "loading-delivery2.com",
    "seznam.cz",
    "ltn.com.tw",
    "about.com",
    "chaturbate.com",
    "ebay-kleinanzeigen.de",
    "slack.com",
    "mercadolivre.com.br",
    "google.co.il",
    "doorblog.jp",
    "goodreads.com",
    "livejasmin.com",
    "battle.net",
    "softonic.com",
    "accuweather.com",
    "amazon.es",
    "wordpress.org",
    "mbc.net",
    "slickdeals.net",
    "icloud.com",
    "caijing.com.cn",
    "google.hu",
    "kaskus.co.id",
    "wittyfeed.com",
    "fedex.com",
    "ndtv.com",
    "att.com",
    "mlb.com",
    "kompas.com",
    "google.ie",
    "giphy.com",
    "usatoday.com",
    "xcar.com.cn",
    "hulu.com",
    "archive.org",
    "sberbank.ru",
    "media.tumblr.com",
    "pinimg.com",
    "messenger.com",
    "sourceforge.net",
    "oracle.com",
    "hp.com",
    "lowes.com",
    "zendesk.com",
    "viralthread.com",
    "csdn.net",
    "1905.com",
    "mama.cn",
    "youtube-mp3.org",
    "39.net",
    "digikala.com",
    "badoo.com",
    "businessinsider.com",
    "kinogo.co",
    "weebly.com",
    "samsung.com",
    "abs-cbn.com",
    "reimageplus.com",
    "airbnb.com",
    "sabah.com.tr",
    "wordreference.com",
    "hurriyet.com.tr",
    "uefa.com",
    "rambler.ru",
    "51yes.com",
    "cnnic.cn",
    "webmd.com",
    "ign.com",
    "liputan6.com",
    "dell.com",
    "gizmodo.com",
    "blogspot.com.br",
    "bloomberg.com",
    "blkget.com",
    "gsmarena.com",
    "evernote.com",
    "verizonwireless.com",
    "secureserver.net",
    "repubblica.it",
    "milliyet.com.tr",
    "isanalyze.com",
    "sharepoint.com",
    "eastday.com",
    "mailchimp.com",
    "nyaa.se",
    "enet.com.cn",
    "medium.com",
    "google.az",
    "akamaihd.net",
    "dmm.com",
    "billdesk.com",
    "wsj.com",
    "naukri.com",
    "kinopoisk.ru",
    "friv.com",
    "expedia.com",
    "livedoor.biz",
    "macys.com",
    "avg.com",
    "tube8.com",
    "libero.it",
    "intuit.com",
    "google.no",
    "google.fi",
    "urdupoint.com",
    "taleo.net",
    "addthis.com",
    "sahibinden.com",
    "ancestry.com",
    "likes.com",
    "savefrom.net",
    "haber7.com",
    "answers.com",
    "google.sk",
    "kissanime.to",
    "marca.com",
    "k618.cn",
    "ebay.in",
    "ask.fm",
    "wetransfer.com",
    "adplxmd.com",
    "spiegel.de",
    "bild.de",
    "livedoor.com",
    "ouo.io",
    "nownews.com",
    "elpais.com",
    "thesaurus.com",
    "rt.com",
    "amazon.ca",
    "gearbest.com",
    "ck101.com",
    "independent.co.uk",
    "reuters.com",
    "google.dk",
    "suning.com",
    "daikynguyenvn.com",
    "scribd.com",
    "themeforest.net",
    "lifebuzz.com",
    "acfun.tv",
    "box.com",
    "newegg.com",
    "nbcnews.com",
    "rutracker.org",
    "freepik.com",
    "telegram.org",
    "kapanlagi.com",
    "goal.com",
    "blogfa.com",
    "southwest.com",
    "openload.co",
    "hm.com",
    "kickstarter.com",
    "cloudfront.net",
    "thesportbible.com",
    "engadget.com",
    "impress.co.jp",
    "kohls.com",
    "playstation.com",
    "clickadu.com",
    "shopify.com",
    "tabelog.com",
    "mashable.com",
    "upwork.com",
    "espncricinfo.com",
    "conservativetribune.com",
    "siteadvisor.com",
    "realtor.com",
    "asos.com",
    "ci123.com",
    "hatena.ne.jp",
    "usaa.com",
    "xe.com",
    "olx.pl",
    "videomega.tv",
    "ameba.jp",
    "atlassian.net",
    "sh.st",
    "ebay.it",
    "doublepimp.com",
    "costco.com",
    "albawabhnews.com",
    "hatenablog.com",
    "gismeteo.ru",
    "souq.com",
    "google.by",
    "extratorrent.cc",
    "yallakora.com",
    "abcnews.go.com",
    "baike.com",
    "moneycontrol.com",
    "lifehacker.com",
    "wunderground.com",
    "hotels.com",
    "zippyshare.com",
    "zoho.com",
    "discovercard.com",
    "fidelity.com",
    "cnblogs.com",
    "zomato.com",
    "jabong.com",
    "blogimg.jp",
    "nikkei.com",
    "4shared.com",
    "offerhaus.link",
    "hespress.com",
    "theverge.com",
    "exoclick.com",
    "bhaskar.com",
    "gamer.com.tw",
    "webex.com",
    "17ok.com",
    "elmogaz.com",
    "gap.com",
    "gamepedia.com",
    "gamersky.com",
    "okezone.com",
    "gamefaqs.com",
    "infusionsoft.com",
    "ebay.com.au",
    "clipconverter.cc",
    "umblr.com",
    "ibm.com",
    "ticketmaster.com",
    "mercadolibre.com.ar",
    "beeg.com",
    "behance.net",
    "surveymonkey.com",
    "rbc.ru",
    "rednet.cn",
    "ca.gov",
    "trulia.com",
    "zing.vn",
    "elmundo.es",
    "mi.com",
    "aparat.com",
    "free.fr",
    "airtel.in",
    "blackboard.com",
    "meetup.com",
    "trackingclick.net",
    "google.bg",
    "google.lk",
    "adidas.tmall.com",
    "nordstrom.com",
    "merdeka.com",
    "list-manage.com",
    "nike.com",
    "list.tmall.com",
    "seesaa.net",
    "blogspot.jp",
    "allrecipes.com",
    "google.kz",
    "huaban.com",
    "nifty.com",
    "fiverr.com",
    "donga.com",
    "mobile.de",
    "npr.org",
    "kooora.com",
    "wayfair.com",
    "coursera.org",
    "redirectvoluum.com",
    "tutorialspoint.com",
    "panda.tv",
    "lenta.ru",
    "weblio.jp",
    "xda-developers.com",
    "asahi.com",
    "google.com.kw",
    "thefreedictionary.com",
    "adp.com",
    "kayak.com",
    "yandex.ua",
    "kijiji.ca",
    "youdao.com",
    "korabia.com",
    "chaoshi.tmall.com",
    "netteller.com",
    "drudgereport.com",
    "japanpost.jp",
    "hotstar.com",
    "tradeadexchange.com",
    "hdzog.com",
    "change.org",
    "hootsuite.com",
    "dictionary.com",
    "makemytrip.com",
    "sq.cn",
    "streamcloud.eu",
    "norton.com",
    "blog.me",
    "watsons.tmall.com",
    "prothom-alo.com",
    "researchgate.net",
    "ebates.com",
    "hotmovs.com",
    "olx.in",
    "sakura.ne.jp",
    "bookmyshow.com",
    "subscene.com",
    "le.com",
    "emol.com",
    "justdial.com",
    "11st.co.kr",
    "cookpad.com",
    "retailmenot.com",
    "thewatchseries.to",
    "alicdn.com",
    "shaparak.ir",
    "corriere.it",
    "gmarket.co.kr",
    "overstock.com",
    "asus.com",
    "y8.com",
    "yaolan.com",
    "momoshop.com.tw",
    "woot.com",
    "shopclues.com",
    "csgolounge.com",
    "disqus.com",
    "so-net.ne.jp",
    "wattpad.com",
    "ytimg.com",
    "cbsnews.com",
    "leagueoflegends.com",
    "prjcq.com",
    "reddituploads.com",
    "patch.com",
    "4399.com",
    "adbooth.com",
    "sabq.org",
    "dropbooks.tv",
    "www.gov.uk",
    "udemy.com",
    "cnmo.com",
    "bleacherreport.com",
    "aa.com",
    "lapatilla.com",
    "instructables.com",
    "clien.net",
    "bidverdrd.com",
    "nba.com",
    "mirror.co.uk",
    "interia.pl",
    "nhk.or.jp",
    "ensonhaber.com",
    "yadi.sk",
    "line.me",
    "mercadolibre.com.ve",
    "e-hentai.org",
    "uploaded.net",
    "verizon.com",
    "alexa.cn",
    "namu.wiki",
    "yodobashi.com",
    "heroquizz.com",
    "latimes.com",
    "123cha.com",
    "pof.com",
    "eyny.com",
    "azlyrics.com",
    "aliyun.com",
    "people.com",
    "yandex.com.tr",
    "rottentomatoes.com",
    "104.com.tw",
    "houzz.com",
    "time.com",
    "cisco.com",
    "ppomppu.co.kr",
    "delta.com",
    "biglobe.ne.jp",
    "jrj.com.cn",
    "xunlei.com",
    "lenovo.com",
    "usbank.com",
    "vk.me",
    "zulily.com",
    "asana.com",
    "youboy.com",
    "zone-telechargement.com",
    "glassdoor.com",
    "seasonvar.ru",
    "nikkeibp.co.jp",
    "investing.com",
    "google.com.do",
    "united.com",
    "teepr.com",
    "indianexpress.com",
    "wikiwiki.jp",
    "pch.com",
    "jimdo.com",
    "oeeee.com",
    "gyazo.com",
    "myfitnesspal.com",
    "yts.ag",
    "custhelp.com",
    "paytm.in",
    "nextdoor.com",
    "voc.com.cn",
    "cnbc.com",
    "sears.com",
    "bs.to",
    "itmedia.co.jp",
    "thekitchn.com",
    "bomb01.com",
    "slate.com",
    "torcache.net",
    "google.com.my",
    "4chan.org",
    "biobiochile.cl",
    "google.co.nz",
    "okcupid.com",
    "google.rs",
    "instructure.com",
    "intoday.in",
    "zhanqi.tv",
    "chinaso.com",
    "squarespace.com",
    "fitbit.com",
    "photobucket.com",
    "eskimi.com",
    "mixi.jp",
    "4dsply.com",
    "thatviralfeed.com",
    "pantip.com",
    "as.com",
    "elfagr.org",
    "3dmgame.com",
    "howtogeek.com",
    "aastocks.com",
    "manoramaonline.com",
    "alwafd.org",
    "inquirer.net",
    "himado.in",
    "xbox.com",
    "meaww.com",
    "pogo.com",
    "redfin.com",
    "buy.tmall.com",
    "drom.ru",
    "infoseek.co.jp",
    "buzzfil.net",
    "urbandictionary.com",
    "mit.edu",
    "olx.com.br",
    "chinaz.com",
    "chip.de",
    "panet.co.il",
    "gamespot.com",
    "google.com.ec",
    "subito.it",
    "gazetaexpress.com",
    "zara.com",
    "swagbucks.com",
    "tmz.com",
    "nexusmods.com",
    "tsite.jp",
    "timeanddate.com",
    "discuss.com.hk",
    "quanjing.com",
    "bhphotovideo.com",
    "lequipe.fr",
    "superuser.com",
    "ero-advertising.com",
    "myntra.com",
    "cdiscount.com",
    "issuu.com",
    "filehippo.com",
    "vporn.com",
    "quikr.com",
    "axisbank.co.in",
    "gameforge.com",
    "twoo.com",
    "4pda.ru",
    "java.com",
    "blogspot.mx",
    "spankbang.com",
    "discover.com",
    "kdnet.net",
    "agar.io",
    "priceline.com",
    "mercadolibre.com.mx",
    "atwiki.jp",
    "audible.com",
    "mynavi.jp",
    "vodlocker.com",
    "sky.com",
    "sciencedirect.com",
    "gigazine.net",
    "olx.ua",
    "livescore.com",
    "58.com",
    "syosetu.com",
    "prezi.com",
    "hotnewhiphop.com",
    "jcpenney.com",
    "ero-video.net",
    "nypost.com",
    "nydailynews.com",
    "acunn.com",
    "foodnetwork.com",
    "mint.com",
    "bitbucket.org",
    "creditkarma.com",
    "mataharimall.com",
    "rarbg.to",
    "tim.it",
    "anitube.se",
    "mapquest.com",
    "westernjournalism.com",
    "eventbrite.com",
    "liveinternet.ru",
    "politico.com",
    "android.com",
    "weather.gov",
    "lun.com",
    "bankmellat.ir",
    "sfgate.com",
    "misrjournal.com",
    "lemonde.fr",
    "uber.com",
    "givemesport.com",
    "stockstar.com",
    "wiktionary.org",
    "51sole.com",
    "google.hr",
    "reverso.net",
    "thehindu.com",
    "marriott.com",
    "yomiuri.co.jp",
    "topix.com",
    "prpops.com",
    "sankei.com",
    "europa.eu",
    "pcmag.com",
    "constantcontact.com",
    "battlefield.com",
    "php.net",
    "ria.ru",
    "fanpage.gr",
    "getpocket.com",
    "cpasbien.cm",
    "diep.io",
    "rightmove.co.uk",
    "sfr.fr",
    "hilton.com",
    "sozcu.com.tr",
    "blog-newstime.com",
    "agoda.com",
    "india.com",
    "bodybuilding.com",
    "techcrunch.com",
    "thisav.com",
    "hbogo.com",
    "zappos.com",
    "google.lt",
    "appledaily.com.tw",
    "geocities.jp",
    "duckduckgo.com",
    "irs.gov",
    "kotaku.com",
    "marktplaats.nl",
    "eroterest.net",
    "duolingo.com",
    "ebay.fr",
    "wp.com",
    "jin115.com",
    "staples.com",
    "youjizz.com",
    "fanfiction.net",
    "walgreens.com",
    "bt.com",
    "microsoftstore.com",
    "123movies.to",
    "126.com",
    "exblog.jp",
    "yjc.ir",
    "t-mobile.com",
    "farsnews.com",
    "chron.com",
    "stumbleupon.com",
    "parentanswercentre.com",
    "123rf.com",
    "breitbart.com",
    "hh.ru",
    "cbssports.com",
    "sex.com",
    "pnc.com",
    "mega.co.nz",
    "lazada.co.id",
    "marketwatch.com",
    "ew.com",
    "ryanair.com",
    "gazeta.pl",
    "gmanetwork.com",
    "dcinside.com",
    "ampclicks.com",
    "slimspots.com",
    "basecamp.com",
    "cctv.com",
    "incometaxindiaefiling.gov.in",
    "citibank.co.in",
    "brightonclick.com",
    "gazzetta.it",
    "indianrail.gov.in",
    "idnes.cz",
    "thedailybeast.com",
    "intel.com",
    "auction.co.kr",
    "fatosdesconhecidos.com.br",
    "to8to.com",
    "ultimate-guitar.com",
    "mcafee.com",
    "neobux.com",
    "tripadvisor.co.uk",
    "tomshardware.com",
    "rapidgator.net",
    "bola.net",
    "hubspot.com",
    "otto.de",
    "digitaltrends.com",
    "elevenia.co.id",
    "n121adserv.com",
    "gofundme.com",
    "lacaixa.es",
    "ctrip.com",
    "flashx.tv",
    "quizlet.com",
    "banggood.com",
    "garmin.com",
    "primewire.ag",
    "vox.com",
    "labanquepostale.fr",
    "telekom.com",
    "drive2.ru",
    "eonline.com",
    "chosun.com",
    "credit-agricole.fr",
    "wowhead.com",
    "match.com",
    "hamariweb.com",
    "vnexpress.net",
    "familydoctor.com.cn",
    "thethao247.vn",
    "state.gov",
    "todayhumor.co.kr",
    "abril.com.br",
    "uzone.id",
    "hepsiburada.com",
    "wwwpromoter.com",
    "popsugar.com",
    "panasonic.jp",
    "360doc.com",
    "minecraft.net",
    "internethaber.com",
    "dailypakistan.com.pk",
    "bedbathandbeyond.com",
    "pixabay.com",
    "wav.tv",
    "novinky.cz",
    "uptobox.com",
    "whitepages.com",
    "icolor.com.cn",
    "babycenter.com",
    "qvc.com",
    "indiamart.com",
    "onlinecreditcenter6.com",
    "6pm.com",
    "g2a.com",
    "milanuncios.com",
    "mayoclinic.org",
    "commentcamarche.net",
    "gawker.com",
    "fandango.com",
    "duowan.com",
    "myanimelist.net",
    "telegram.me",
    "genius.com",
    "wiley.com",
    "liveleak.com",
    "divar.ir",
    "bestadbid.com",
    "niuche.com",
    "chouftv.ma",
    "life.tw",
    "dream.co.id",
    "cocolog-nifty.com",
    "ptt.cc",
    "legacy.com",
    "mynet.com",
};