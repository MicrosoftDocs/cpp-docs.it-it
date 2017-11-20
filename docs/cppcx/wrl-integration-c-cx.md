---
title: Integrazione WRL (C + + CX) | Documenti Microsoft
ms.custom: 
ms.date: 01/22/2017
ms.technology: cpp-windows
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 3ad43894-c574-477c-ad3e-240301f381d4
caps.latest.revision: "9"
author: ghogen
ms.author: ghogen
manager: ghogen
ms.openlocfilehash: 289c82a69ebc549d53e7b8ae49b6939200eb3aac
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="wrl-integration-ccx"></a>Integrazione WRL (C++/CX)
È possibile combinare liberamente il codice WRL con [!INCLUDE[cppwrl](includes/cppwrl-md.md)] ([!INCLUDE[cppwrl_short](includes/cppwrl-short-md.md)]) codice. Nella stessa unità di conversione, è possibile utilizzare oggetti dichiarati con WRL handle a oggetto (`^`) notazione e [!INCLUDE[cppwrl_short](includes/cppwrl-short-md.md)] puntatore intelligente (`ComPtr<T>`) notazione. Tuttavia, è necessario gestire manualmente i valori restituiti, e [!INCLUDE[cppwrl_short](includes/cppwrl-short-md.md)] HRESULT codici di errore e le eccezioni possono essere richiesti.  
  
## <a name="includecppwrlshortincludescppwrl-short-mdmd-development"></a>Sviluppo in[!INCLUDE[cppwrl_short](includes/cppwrl-short-md.md)]   
 Per ulteriori informazioni sulla creazione e utilizzo [!INCLUDE[cppwrl_short](includes/cppwrl-short-md.md)] componenti, vedere [libreria di modelli C++ (WRL) di Windows Runtime](../windows/windows-runtime-cpp-template-library-wrl.md).  
  
### <a name="example"></a>Esempio  
 Frammento di codice seguente viene illustrato come utilizzare WRL e [!INCLUDE[cppwrl_short](includes/cppwrl-short-md.md)] utilizzare [!INCLUDE[wrt](includes/wrt-md.md)] classi ed esaminare un file di metadati.  
>>>>>>> master
  
 Esempio tratto da un frammento di codice presente nel [forum per la compilazione di app di Windows Store](http://social.msdn.microsoft.com/Forums/winappswithnativecode/thread/211ef583-db11-4e55-926b-6d9ab53dbdb4). L'autore del frammento di codice presenta le seguenti dichiarazioni di non responsabilità e condizioni:  
  
1.  Il linguaggio C++ non fornisce API specifiche che si riflettono sui tipi [!INCLUDE[wrt](includes/wrt-md.md)] , ma i file di metadati di Windows (.winmd) per un tipo sono pienamente compatibili con i file di metadati CLR. Windows fornisce la nuova API di individuazione dei metadati (RoGetMetaDataFile) per ottenere il file .winmd per un determinato tipo. Tuttavia, queste API sono limitate all'uso da parte degli sviluppatori C++ perché non è possibile creare istanze di una classe.  
  
2.  Una volta compilato il codice, dovrai anche passare i file Runtimeobject.lib e Rometadata.lib al linker.  
  
3.  Questo frammento è riportato così com'è. I codice dovrebbe funzionare correttamente, ma potrebbe contenere degli errori.  
  
```  
  
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
  
    for(int i = 0; i < countMethodDefs; ++i)  
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