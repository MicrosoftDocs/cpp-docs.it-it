---
title: Integrazione WRL (C++/CX)
ms.date: 01/22/2017
ms.assetid: 3ad43894-c574-477c-ad3e-240301f381d4
ms.openlocfilehash: 3ea0f6aece985a2ee74916e737b9aab1bf0d1d96
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91507404"
---
# <a name="wrl-integration-ccx"></a>Integrazione WRL (C++/CX)

È possibile combinare liberamente il codice WRL con Windows Runtime codice WRL (C++ Template Library). Nella stessa unità di conversione è possibile usare oggetti dichiarati con la notazione handle a oggetto ( `^` ) WRL e la notazione del puntatore intelligente WRL ( `ComPtr<T>` ). Tuttavia, è necessario gestire manualmente i valori restituiti e i codici di errore HRESULT e le eccezioni WRL di WRL.

## <a name="wrl-development"></a>Sviluppo WRL

Per ulteriori informazioni sulla creazione e sull'utilizzo di componenti WRL, vedere [Windows Runtime libreria di modelli C++ (WRL)](./wrl/windows-runtime-cpp-template-library-wrl.md).

### <a name="example"></a>Esempio

Nel frammento di codice seguente viene illustrato l'utilizzo di WRL e WRL per utilizzare Windows Runtime classi ed esaminare un file di metadati.

L'esempio è tratto da un frammento di codice nel Forum Building Microsoft Store Apps. L'autore del frammento di codice presenta le seguenti dichiarazioni di non responsabilità e condizioni:

1. C++ non fornisce API specifiche per la reflection sui tipi di Windows Runtime, ma i file di metadati di Windows (con estensione winmd) per un tipo sono completamente compatibili con i file di metadati CLR. Windows fornisce la nuova API di individuazione dei metadati (RoGetMetaDataFile) per ottenere il file .winmd per un determinato tipo. Tuttavia, queste API sono limitate all'uso da parte degli sviluppatori C++ perché non è possibile creare istanze di una classe.

1. Una volta compilato il codice, dovrai anche passare i file Runtimeobject.lib e Rometadata.lib al linker.

1. Questo frammento è riportato così com'è. I codice dovrebbe funzionare correttamente, ma potrebbe contenere degli errori.

```cpp
#include <hstring.h>
#include <cor.h>
#include <rometadata.h>
#include <rometadataresolution.h>
#include <collection.h>

namespace ABI_Isolation_Workaround {
    #include <inspectable.h>
    #include <WeakReference.h>
}
using namespace ABI_Isolation_Workaround;
#include <wrl/client.h>

using namespace Microsoft::WRL;
using namespace Windows::Foundation::Collections;

IVector<String^>^ GetTypeMethods(Object^);

MainPage::MainPage()
{
    InitializeComponent();

    Windows::Foundation::Uri^ uri = ref new Windows::Foundation::Uri("http://buildwindows.com/");
    auto methods = GetTypeMethods(uri);

    std::wstring strMethods;
    std::for_each(begin(methods), end(methods), [&strMethods](String^ methodName) {
        strMethods += methodName->Data();
        strMethods += L"\n";
    });

    wprintf_s(L"%s\n", strMethods.c_str());
}

IVector<String^>^ GetTypeMethods(Object^ instance)
{
    HRESULT hr;
    HSTRING hStringClassName;
    hr = instance->__cli_GetRuntimeClassName(reinterpret_cast<__cli_HSTRING__**>(&hStringClassName)); // internal method name subject to change post BUILD
    if (FAILED(hr))
        __cli_WinRTThrowError(hr); // internal method name subject to change post BUILD
    String^ className = reinterpret_cast<String^>(hStringClassName);

    ComPtr<IMetaDataDispenserEx> metadataDispenser; ComPtr<IMetaDataImport2> metadataImport; hr = MetaDataGetDispenser(CLSID_CorMetaDataDispenser, IID_IMetaDataDispenser, (LPVOID*)metadataDispenser.GetAddressOf());
    if (FAILED(hr))
        __cli_WinRTThrowError(hr); // internal method name subject to change post BUILD

    HSTRING hStringFileName;
    mdTypeDef typeDefToken;
    hr = RoGetMetaDataFile(hStringClassName, metadataDispenser.Get(), &hStringFileName, &metadataImport, &typeDefToken);
    if (FAILED(hr))
        __cli_WinRTThrowError(hr); // internal method name subject to change post BUILD
    String^ fileName = reinterpret_cast<String^>(hStringFileName);

    HCORENUM hCorEnum = 0;
    mdMethodDef methodDefs[2048];
    ULONG countMethodDefs = sizeof(methodDefs);
    hr = metadataImport->EnumMethods(&hCorEnum, typeDefToken, methodDefs, countMethodDefs,  &countMethodDefs);
    if (FAILED(hr))
        __cli_WinRTThrowError(hr); // internal method name subject to change post BUILD

    wchar_t methodName[1024];
    ULONG countMethodName;
    std::wstring strMethods;
    Vector<String^>^ retVal = ref new Vector<String^>();

    for (int i = 0; i < countMethodDefs; ++i)
    {
        countMethodName = sizeof(methodName);
        hr = metadataImport->GetMethodProps(methodDefs[i], nullptr, methodName, countMethodName, &countMethodName, nullptr, nullptr, nullptr, nullptr, nullptr);
        if (SUCCEEDED(hr))
        {
            methodName[ countMethodName ] = 0;
            retVal->Append(ref new String(methodName));
        }
    }
    return retVal;
}
```

## <a name="see-also"></a>Vedere anche

[Interoperabilità con altri linguaggi](interoperating-with-other-languages-c-cx.md)
