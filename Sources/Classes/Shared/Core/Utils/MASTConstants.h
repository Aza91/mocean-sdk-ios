/*
 *  Constants.h
 *  AdMobileSDK
 *
 *  Created by Constantine on 7/27/10.
 *
 */

#define LIBRARY_VERSION             @"2.10.beta"

#define kDefaultAdServerUrl         @"http://ads.mocean.mobi/ad"
#define kGoogleUrl                  @"http://www.google.com"
#define kGoogleMapsUrl              @"http://maps.google.com/maps?q="
#define kMoceanServerUrl            @"http://www.moceanmobile.com/appconversion.php"

#define kPathForFolderCache         @"Library/MojivaAd/Cache"
#define PLTFORM_IPHONE_1G			@"iPhone 1G"
#define PLTFORM_IPHONE_3G			@"iPhone 3G"
#define PLTFORM_IPHONE_3GS			@"iPhone 3GS"
#define PLTFORM_IPHONE_4			@"iPhone 4"
#define PLTFORM_IPOD_1G				@"iPod Touch 1G"
#define PLTFORM_IPOD_2G				@"iPod Touch 2G"
#define PLTFORM_IPOD_3G				@"iPod Touch 3G"
#define PLTFORM_IPHONE_SIMULATOR	@"iPhone Simulator"

#define DELAY_3G					20
#define DELAY_WIFI					15

#define MIN_TIMEOUT_VALUE           0
#define MAX_TIMEOUT_VALUE           3000
#define DEFAULT_TIMEOUT_VALUE       1000 // 1 sec
#define DEFAULT_UPDATE_TIMEINTERVAL 120 // 2 min

#define kBackIcon2xB64              @"iVBORw0KGgoAAAANSUhEUgAAACAAAAAmCAYAAAClI5npAAAACXBIWXMAABYlAAAW\nJQFJUiTwAAAB30lEQVRYCcWYsUsDMRTGWyuCUCh0curUqVIRhIogCJ1cu+rYSUdd\nBFfXTkKnrq6ddFT6BygFJ0EQnBTBQXQRhPp7wpWQ5s5Lmss9+Gjy7uV9X/IuubsW\nJ5NJIU9byJG8DvdlQVYgMMrw9cA3CE7ehfNFiCMLNfsWhLcRqfqbtYAVyC5UQr2d\nlYBliE7Bp06o97MQ0IHkUSeK6/sU0IDkOo4ozu/jHKiwn/vgHrSBnaHMdRVKjD0A\n73GzS+NftJM7jd6hdQ6aU49jw7YENXiGYATmJidHIa2AZWLPwAPoAH9Gnf67B/aI\neU5TT5eYpHtgnWlKnbf9TXc2k6kEVcIGYAwyJRc5qoAl+kfgCXRBEItKsAtbDzSC\nsCok0QqU8MkKBLdIwBXMq+AYfAVVYdiG8gwfuGwplzFFERBjG/jlIdOKue7FHZXA\nlOwO5ybYB6+mAB++pBVQ85fpnADZpnIs+zMpgQXqxA6BN0u7AvqM2zjkmJ773Ei6\nB3RStX9DZw0cgg/1gnWbtbQpgSm2So4++HGpiymhq6+JgJGtCFeypHHyWp76/SEp\n0TzXcv0wUYXXWI1cPs1UEdLeAmMwY3pg1n35PH9TVWRNaMpfQcD0DwrXk9D6vDEM\nkFO0l6eAP02/jkIS2Q3aJmAAAAAASUVORK5CYII="
#define kBackIconB64                @"iVBORw0KGgoAAAANSUhEUgAAABAAAAATCAYAAACZZ43PAAAA20lEQVQ4EWP8//8/\nAwWAn4lMzcxAfTlAfIkB5AISsStQ/VUgBoEPpGhWAWpYB9aGIIgygAeovh2IfyL0\nwVkEDUgAKn0OV47JwGmAGVDtSUz1GCIYBkgAlSzCUIZbAG4AG1BNNRB/xq0WqwzY\nAGag1Gqs0oQF4S4AGZIJxG8J60FRATcAlh74gdKTgfgPijLcHAwDYAZpAfXswq0P\nLoPTAJhBgUClt+HKMRkEDQAZBIqhCiDGFkNEGQBzDSiNzAdiZECSATCDkFMpWQbA\nDIoFOuUGI5Ags0wBa+MEAIN6hjBF5RMQAAAAAElFTkSuQmCC"
#define kForwardIcon2xB64           @"iVBORw0KGgoAAAANSUhEUgAAACAAAAAmCAYAAAClI5npAAAACXBIWXMAABYlAAAW\nJQFJUiTwAAAB40lEQVRYCcWYPUsDQRCGEyOCEAgIglWqVEosFcHKf5BWy1QKNlra\nWthomSqtbSpFGyVWgigRBRFSWWmTQhRFEM5nThaO3EduN3t7C8/dZm5n592Z+0zR\n87xCnm2C4CdQy00EGZD2A4dQhoJLJFiwvfKjCc5EDAtQYm7pLLkQEidACTmmM5el\nkFECRMgH7ME0WC9NGgHE9VufbQOsitAR8C/D8y7ozNsSIvcB3baGwwO0oKLrHBqv\nlmW4H+C3CSUwKk1RAodU6RsecdmGK11XkxJExahj7EIHqpC62RKgAjboPMM+lJUx\ncS8lyKi9MO86JJ4bts6BpEVec3AL7qMG2S5BVIwVjD1ow+zwABcCVMwmnT7swJQy\nuiiBihXcP/FjF85dZiAoQDJQEoNrAZ/ElJUvwCkUTB5GpldtG8fQu8WkryLbzQ3T\ny2V4FxUmyxK8EXADluOCi6AsMvDNvEdwAFLz5GZa0Bi/DvYaJN5+g8dtZUCua3kc\nXyYvN3x03HPgnSnlBFsE7eC+nJhUjjL/MqAFM5A63VFjTe4DXSaqR01mYtMRIM/3\nXF7Lvwic24eJfJpVTVKb1ieuBD0mWE07yTjjhgXIe34un+fqD4rKOKsx8ZUMnIG1\nbz1dEfJK5t+Q8tr8AYzuebexMvhiAAAAAElFTkSuQmCC"
#define kForwardIconB64             @"iVBORw0KGgoAAAANSUhEUgAAABAAAAATCAYAAACZZ43PAAAA5ElEQVQ4EZ2UMQrC\nMBSGU4WCIBQ8gJOrq+ANXD2Dq5OrZ3D1Bp7B1RsITq6uThZFEIT4vUgkxDRt8+Br\nX2j+j9C0ybTWhVKqhKTqkDrBCvIkAyu4gdQZZqDaIJOtgNbUnusIGolCArG8YAMF\nREVVAnKmrlwXUCmpE3w1Wh9ppiFRU4EV7WiGrqitQERPWEMPVIqAnCnZrTxFINu+\nhC60WsGbwBYGErQ0XcGBwNiG3Hud4MLkuRvw+yrBnYm/N+2H3HFI8LfXbsDvXYF8\nbRN/Qt1YBPIbR7/3mCTjYZ+D5JF0mBD6AHRriJ94fzxyAAAAAElFTkSuQmCC"
#define kCloseIcon2xB64           @"iVBORw0KGgoAAAANSUhEUgAAADgAAAA4CAYAAACohjseAAAACXBIWXMAAC4jAAAuIwF4pT92AAAK\nTWlDQ1BQaG90b3Nob3AgSUNDIHByb2ZpbGUAAHjanVN3WJP3Fj7f92UPVkLY8LGXbIEAIiOsCMgQ\nWaIQkgBhhBASQMWFiApWFBURnEhVxILVCkidiOKgKLhnQYqIWotVXDjuH9yntX167+3t+9f7vOec\n5/zOec8PgBESJpHmomoAOVKFPDrYH49PSMTJvYACFUjgBCAQ5svCZwXFAADwA3l4fnSwP/wBr28A\nAgBw1S4kEsfh/4O6UCZXACCRAOAiEucLAZBSAMguVMgUAMgYALBTs2QKAJQAAGx5fEIiAKoNAOz0\nST4FANipk9wXANiiHKkIAI0BAJkoRyQCQLsAYFWBUiwCwMIAoKxAIi4EwK4BgFm2MkcCgL0FAHaO\nWJAPQGAAgJlCLMwAIDgCAEMeE80DIEwDoDDSv+CpX3CFuEgBAMDLlc2XS9IzFLiV0Bp38vDg4iHi\nwmyxQmEXKRBmCeQinJebIxNI5wNMzgwAABr50cH+OD+Q5+bk4eZm52zv9MWi/mvwbyI+IfHf/ryM\nAgQAEE7P79pf5eXWA3DHAbB1v2upWwDaVgBo3/ldM9sJoFoK0Hr5i3k4/EAenqFQyDwdHAoLC+0l\nYqG9MOOLPv8z4W/gi372/EAe/tt68ABxmkCZrcCjg/1xYW52rlKO58sEQjFu9+cj/seFf/2OKdHi\nNLFcLBWK8ViJuFAiTcd5uVKRRCHJleIS6X8y8R+W/QmTdw0ArIZPwE62B7XLbMB+7gECiw5Y0nYA\nQH7zLYwaC5EAEGc0Mnn3AACTv/mPQCsBAM2XpOMAALzoGFyolBdMxggAAESggSqwQQcMwRSswA6c\nwR28wBcCYQZEQAwkwDwQQgbkgBwKoRiWQRlUwDrYBLWwAxqgEZrhELTBMTgN5+ASXIHrcBcGYBie\nwhi8hgkEQcgIE2EhOogRYo7YIs4IF5mOBCJhSDSSgKQg6YgUUSLFyHKkAqlCapFdSCPyLXIUOY1c\nQPqQ28ggMor8irxHMZSBslED1AJ1QLmoHxqKxqBz0XQ0D12AlqJr0Rq0Hj2AtqKn0UvodXQAfYqO\nY4DRMQ5mjNlhXIyHRWCJWBomxxZj5Vg1Vo81Yx1YN3YVG8CeYe8IJAKLgBPsCF6EEMJsgpCQR1hM\nWEOoJewjtBK6CFcJg4Qxwicik6hPtCV6EvnEeGI6sZBYRqwm7iEeIZ4lXicOE1+TSCQOyZLkTgoh\nJZAySQtJa0jbSC2kU6Q+0hBpnEwm65Btyd7kCLKArCCXkbeQD5BPkvvJw+S3FDrFiOJMCaIkUqSU\nEko1ZT/lBKWfMkKZoKpRzame1AiqiDqfWkltoHZQL1OHqRM0dZolzZsWQ8ukLaPV0JppZ2n3aC/p\ndLoJ3YMeRZfQl9Jr6Afp5+mD9HcMDYYNg8dIYigZaxl7GacYtxkvmUymBdOXmchUMNcyG5lnmA+Y\nb1VYKvYqfBWRyhKVOpVWlX6V56pUVXNVP9V5qgtUq1UPq15WfaZGVbNQ46kJ1Bar1akdVbupNq7O\nUndSj1DPUV+jvl/9gvpjDbKGhUaghkijVGO3xhmNIRbGMmXxWELWclYD6yxrmE1iW7L57Ex2Bfsb\ndi97TFNDc6pmrGaRZp3mcc0BDsax4PA52ZxKziHODc57LQMtPy2x1mqtZq1+rTfaetq+2mLtcu0W\n7eva73VwnUCdLJ31Om0693UJuja6UbqFutt1z+o+02PreekJ9cr1Dund0Uf1bfSj9Rfq79bv0R83\nMDQINpAZbDE4Y/DMkGPoa5hpuNHwhOGoEctoupHEaKPRSaMnuCbuh2fjNXgXPmasbxxirDTeZdxr\nPGFiaTLbpMSkxeS+Kc2Ua5pmutG003TMzMgs3KzYrMnsjjnVnGueYb7ZvNv8jYWlRZzFSos2i8eW\n2pZ8ywWWTZb3rJhWPlZ5VvVW16xJ1lzrLOtt1ldsUBtXmwybOpvLtqitm63Edptt3xTiFI8p0in1\nU27aMez87ArsmuwG7Tn2YfYl9m32zx3MHBId1jt0O3xydHXMdmxwvOuk4TTDqcSpw+lXZxtnoXOd\n8zUXpkuQyxKXdpcXU22niqdun3rLleUa7rrStdP1o5u7m9yt2W3U3cw9xX2r+00umxvJXcM970H0\n8PdY4nHM452nm6fC85DnL152Xlle+70eT7OcJp7WMG3I28Rb4L3Le2A6Pj1l+s7pAz7GPgKfep+H\nvqa+It89viN+1n6Zfgf8nvs7+sv9j/i/4XnyFvFOBWABwQHlAb2BGoGzA2sDHwSZBKUHNQWNBbsG\nLww+FUIMCQ1ZH3KTb8AX8hv5YzPcZyya0RXKCJ0VWhv6MMwmTB7WEY6GzwjfEH5vpvlM6cy2CIjg\n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"
#define kCloseIconB64             @"iVBORw0KGgoAAAANSUhEUgAAABwAAAAcCAYAAAByDd+UAAAACXBIWXMAAC4jAAAuIwF4pT92AAAK\nTWlDQ1BQaG90b3Nob3AgSUNDIHByb2ZpbGUAAHjanVN3WJP3Fj7f92UPVkLY8LGXbIEAIiOsCMgQ\nWaIQkgBhhBASQMWFiApWFBURnEhVxILVCkidiOKgKLhnQYqIWotVXDjuH9yntX167+3t+9f7vOec\n5/zOec8PgBESJpHmomoAOVKFPDrYH49PSMTJvYACFUjgBCAQ5svCZwXFAADwA3l4fnSwP/wBr28A\nAgBw1S4kEsfh/4O6UCZXACCRAOAiEucLAZBSAMguVMgUAMgYALBTs2QKAJQAAGx5fEIiAKoNAOz0\nST4FANipk9wXANiiHKkIAI0BAJkoRyQCQLsAYFWBUiwCwMIAoKxAIi4EwK4BgFm2MkcCgL0FAHaO\nWJAPQGAAgJlCLMwAIDgCAEMeE80DIEwDoDDSv+CpX3CFuEgBAMDLlc2XS9IzFLiV0Bp38vDg4iHi\nwmyxQmEXKRBmCeQinJebIxNI5wNMzgwAABr50cH+OD+Q5+bk4eZm52zv9MWi/mvwbyI+IfHf/ryM\nAgQAEE7P79pf5eXWA3DHAbB1v2upWwDaVgBo3/ldM9sJoFoK0Hr5i3k4/EAenqFQyDwdHAoLC+0l\nYqG9MOOLPv8z4W/gi372/EAe/tt68ABxmkCZrcCjg/1xYW52rlKO58sEQjFu9+cj/seFf/2OKdHi\nNLFcLBWK8ViJuFAiTcd5uVKRRCHJleIS6X8y8R+W/QmTdw0ArIZPwE62B7XLbMB+7gECiw5Y0nYA\nQH7zLYwaC5EAEGc0Mnn3AACTv/mPQCsBAM2XpOMAALzoGFyolBdMxggAAESggSqwQQcMwRSswA6c\nwR28wBcCYQZEQAwkwDwQQgbkgBwKoRiWQRlUwDrYBLWwAxqgEZrhELTBMTgN5+ASXIHrcBcGYBie\nwhi8hgkEQcgIE2EhOogRYo7YIs4IF5mOBCJhSDSSgKQg6YgUUSLFyHKkAqlCapFdSCPyLXIUOY1c\nQPqQ28ggMor8irxHMZSBslED1AJ1QLmoHxqKxqBz0XQ0D12AlqJr0Rq0Hj2AtqKn0UvodXQAfYqO\nY4DRMQ5mjNlhXIyHRWCJWBomxxZj5Vg1Vo81Yx1YN3YVG8CeYe8IJAKLgBPsCF6EEMJsgpCQR1hM\nWEOoJewjtBK6CFcJg4Qxwicik6hPtCV6EvnEeGI6sZBYRqwm7iEeIZ4lXicOE1+TSCQOyZLkTgoh\nJZAySQtJa0jbSC2kU6Q+0hBpnEwm65Btyd7kCLKArCCXkbeQD5BPkvvJw+S3FDrFiOJMCaIkUqSU\nEko1ZT/lBKWfMkKZoKpRzame1AiqiDqfWkltoHZQL1OHqRM0dZolzZsWQ8ukLaPV0JppZ2n3aC/p\ndLoJ3YMeRZfQl9Jr6Afp5+mD9HcMDYYNg8dIYigZaxl7GacYtxkvmUymBdOXmchUMNcyG5lnmA+Y\nb1VYKvYqfBWRyhKVOpVWlX6V56pUVXNVP9V5qgtUq1UPq15WfaZGVbNQ46kJ1Bar1akdVbupNq7O\nUndSj1DPUV+jvl/9gvpjDbKGhUaghkijVGO3xhmNIRbGMmXxWELWclYD6yxrmE1iW7L57Ex2Bfsb\ndi97TFNDc6pmrGaRZp3mcc0BDsax4PA52ZxKziHODc57LQMtPy2x1mqtZq1+rTfaetq+2mLtcu0W\n7eva73VwnUCdLJ31Om0693UJuja6UbqFutt1z+o+02PreekJ9cr1Dund0Uf1bfSj9Rfq79bv0R83\nMDQINpAZbDE4Y/DMkGPoa5hpuNHwhOGoEctoupHEaKPRSaMnuCbuh2fjNXgXPmasbxxirDTeZdxr\nPGFiaTLbpMSkxeS+Kc2Ua5pmutG003TMzMgs3KzYrMnsjjnVnGueYb7ZvNv8jYWlRZzFSos2i8eW\n2pZ8ywWWTZb3rJhWPlZ5VvVW16xJ1lzrLOtt1ldsUBtXmwybOpvLtqitm63Edptt3xTiFI8p0in1\nU27aMez87ArsmuwG7Tn2YfYl9m32zx3MHBId1jt0O3xydHXMdmxwvOuk4TTDqcSpw+lXZxtnoXOd\n8zUXpkuQyxKXdpcXU22niqdun3rLleUa7rrStdP1o5u7m9yt2W3U3cw9xX2r+00umxvJXcM970H0\n8PdY4nHM452nm6fC85DnL152Xlle+70eT7OcJp7WMG3I28Rb4L3Le2A6Pj1l+s7pAz7GPgKfep+H\nvqa+It89viN+1n6Zfgf8nvs7+sv9j/i/4XnyFvFOBWABwQHlAb2BGoGzA2sDHwSZBKUHNQWNBbsG\nLww+FUIMCQ1ZH3KTb8AX8hv5YzPcZyya0RXKCJ0VWhv6MMwmTB7WEY6GzwjfEH5vpvlM6cy2CIjg\n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\nRK5CYII="