Pod::Spec.new do |spec|
    spec.name                     = 'kmisskey-release'
    spec.version                  = '0.0.1'
    spec.homepage                 = 'https://github.com/uakihir0/kmisskey'
    spec.source                   = { :http=> ''}
    spec.authors                  = 'Akihiro Urushihara'
    spec.license                  = 'MIT'
    spec.summary                  = 'kmisskey is Misskey library for Kotlin Multiplatform.'
    spec.vendored_frameworks      = 'release/kmisskey.xcframework'
    spec.libraries                = 'c++'
end
