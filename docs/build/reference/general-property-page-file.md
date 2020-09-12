---
title: Pagina delle proprietà Generale (File)
ms.date: 08/30/2019
f1_keywords:
- VC.Project.VCFileConfiguration.ExcludedFromBuild
- VC.Project.VCFileConfiguration.Tool
ms.assetid: 26e3711e-9e7d-4e8d-bc4c-2474538efdad
ms.openlocfilehash: 7626e161e6f59de32d426b558827c423a0bb050d
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90041380"
---
# <a name="general-property-page-file"></a>Pagina delle proprietà Generale (File)

Questo argomento si applica ai progetti Windows. Per i progetti non Windows, vedere [Informazioni di riferimento sulla pagina delle proprietà di un progetto Linux C++](../../linux/prop-pages-linux.md).

Quando si fa clic con il pulsante destro del mouse su un nodo di file **Esplora soluzioni**, viene visualizzata la pagina delle proprietà **generale** nel nodo **proprietà di configurazione** . Contiene le proprietà seguenti:

- **Escluso dalla compilazione**

   Specifica se il file deve essere incluso nella compilazione per la configurazione corrente.

   Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCFileConfiguration.ExcludedFromBuild%2A>.

- **Contenuto** (si applica solo alle app UWP). Specifica se il file contiene contenuto da includere nel pacchetto dell'app.

- **Tipo di elemento**

   Il **tipo di elemento** specifica lo strumento che verrà usato per elaborare il file durante il processo di compilazione. [I file la cui estensione è nota a Visual Studio](/visualstudio/extensibility/visual-cpp-project-extensibility#project-items) hanno un valore predefinito in questa proprietà. È possibile specificare uno strumento personalizzato qui se si dispone di un tipo di file personalizzato o si desidera eseguire l'override dello strumento predefinito per un tipo di file noto. Vedere [Specifica di strumenti di compilazione personalizzata](../specifying-custom-build-tools.md) per altre informazioni. È anche possibile usare questa pagina delle proprietà per specificare che un file non fa parte del processo di compilazione.

   Nella figura seguente viene illustrata la pagina delle proprietà per un file con *estensione cpp* . Il **tipo di elemento** predefinito per questo tipo di file è il **compilatore C/C++** (*cl.exe*) e la pagina delle proprietà espone diverse impostazioni del compilatore che possono essere applicate solo a questo file.

   ![Pagina delle proprietà generale per un elemento di progetto](media/file-general-item-type.png "Opzioni tipo di elemento")

    Nella tabella seguente sono elencati i tipi di elemento predefiniti:

    |Estensione file|Item Type|Strumento predefinito|
    |-|-|-|
    |appx|Definizione dell'applicazione XAML|[Pacchetto di app](/windows/win32/appxpkg/make-appx-package--makeappx-exe-)|
    |. HLSL,. cso|Compilatore HLSL|[fxc.exe](/windows/win32/direct3dtools/fxc)|
    |.h|Intestazione C/C++|[Preprocessore C/C++](../../preprocessor/c-cpp-preprocessor-reference.md)|
    |n/d|Non partecipa alla compilazione|n/d|
    |XML, XSLT, XSL|Xml|[Editor XML](/visualstudio/xml-tools/xml-editor)|
    |. resw,. resjson|Risorsa PRI (app UWP)|[MakePri.exe](/windows/uwp/app-resources/compile-resources-manually-with-makepri)|
    ||Supporti (UWP)|[Pacchetto di app](/windows/win32/appxpkg/make-appx-package--makeappx-exe-)|
    |xsd|Strumento generatore di dati XML|[Strumento XML Schema Definition (Xsd.exe)](/dotnet/standard/serialization/xml-schema-definition-tool-xsd-exe) (richiede un carico di lavoro .NET. Non incluso in MSVC.)|
    ||Strumento Manifesto|[mt.exe](/windows/win32/sbscs/mt-exe)|
    |.rc|Risorsa|[Compilatore di risorse Windows (rc.exe)](/windows/win32/menurc/resource-compiler)|
    |. appxmanifest|Manifesto del pacchetto dell'app|[Pacchetto di app](/windows/win32/appxpkg/make-appx-package--makeappx-exe-)|
    |.obj|Oggetto|[Linker C/C++ (link.exe)](cl-invokes-the-linker.md)|
    |.ttf|Carattere|n/d|
    |.txt|Text|n/d|
    |n/d|Strumento di compilazione personalizzato|Route definite dall'utente|
    |n/d|Copia file|n/d|
    |. packagelayout|Layout del pacchetto dell'app|[Pacchetto di app](/windows/win32/appxpkg/make-appx-package--makeappx-exe-)|
    |resx|Risorsa gestita dal compilatore|[Resgen.exe (Generatore di file di risorse)](/dotnet/framework/tools/resgen-exe-resource-file-generator)|
    |. natvis|File di visualizzazione debugger C++|[Framework natvis](/visualstudio/debugger/create-custom-views-of-native-objects)|
    |. jpg,. bmp,. ico e così via.|Immagine|Compilatore di risorse in base al tipo di applicazione.|
    |.cpp|Compilatore C/C++|cl.exe|

   Per accedere a livello di codice a questa proprietà, vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCFileConfiguration.Tool%2A>.

Per informazioni su come accedere alla pagina delle proprietà **generale** nel nodo **proprietà di configurazione** , vedere [impostare le proprietà di compilazione e compilatore C++ in Visual Studio](../working-with-project-properties.md).

## <a name="see-also"></a>Vedi anche

[Riferimento alla pagina delle proprietà del progetto C++](property-pages-visual-cpp.md)
