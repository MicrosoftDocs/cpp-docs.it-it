---
title: "Integrazione WRL (C++/CX) | Microsoft Docs"
ms.custom: ""
ms.date: "01/22/2017"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 3ad43894-c574-477c-ad3e-240301f381d4
caps.latest.revision: 9
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 9
---
# Integrazione WRL (C++/CX)
È possibile combinare liberamente il codice [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] con il codice [!INCLUDE[cppwrl](../cppcx/includes/cppwrl-md.md)] \([!INCLUDE[cppwrl_short](../cppcx/includes/cppwrl-short-md.md)]\). Nella stessa unità di conversione puoi utilizzare oggetti dichiarati con la notazione handle a oggetto [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] \(`^`\) e la notazione del puntatore intelligente [!INCLUDE[cppwrl_short](../cppcx/includes/cppwrl-short-md.md)] \(`ComPtr<T>`\). Tuttavia, devi gestire manualmente i valori restituiti, i codici di errore HRESULT [!INCLUDE[cppwrl_short](../cppcx/includes/cppwrl-short-md.md)] e le eccezioni [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)].  
  
## Sviluppo in [!INCLUDE[cppwrl_short](../cppcx/includes/cppwrl-short-md.md)]  
 Per ulteriori informazioni sulla creazione e sull'utilizzo di componenti, [!INCLUDE[cppwrl_short](../cppcx/includes/cppwrl-short-md.md)] vedi [Libreria di modelli di Windows Runtime C\+\+ \(WRL\)](../Topic/Windows%20Runtime%20C++%20Template%20Library%20\(WRL\).md).  
  
## Esempio  
 Nel frammento di codice riportato di seguito viene illustrato come servirsi di [!INCLUDE[cppwrt_short](../cppcx/includes/cppwrt-short-md.md)] e [!INCLUDE[cppwrl_short](../cppcx/includes/cppwrl-short-md.md)] per utilizzare le classi [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)] ed esaminare i file di metadati.  
  
 Esempio tratto da un frammento di codice presente nel [forum per la compilazione di app di Windows Store](http://social.msdn.microsoft.com/Forums/winappswithnativecode/thread/211ef583-db11-4e55-926b-6d9ab53dbdb4). L'autore del frammento di codice presenta le seguenti dichiarazioni di non responsabilità e condizioni:  
  
1.  Il linguaggio C\+\+ non fornisce API specifiche che si riflettono sui tipi [!INCLUDE[wrt](../cppcx/includes/wrt-md.md)], ma i file di metadati di Windows \(.winmd\) per un tipo sono pienamente compatibili con i file di metadati CLR. Windows fornisce la nuova API di individuazione dei metadati \(RoGetMetaDataFile\) per ottenere il file .winmd per un determinato tipo. Tuttavia, queste API sono limitate all'uso da parte degli sviluppatori C\+\+ perché non è possibile creare istanze di una classe.  
  
2.  Una volta compilato il codice, dovrai anche passare i file Runtimeobject.lib e Rometadata.lib al linker.  
  
3.  Questo frammento è riportato così com'è. I codice dovrebbe funzionare correttamente, ma potrebbe contenere degli errori.  
  
```  
  
#include <hstring.h> #include <cor.h> #include <rometadata.h> #include <rometadataresolution.h> #include <collection.h> namespace ABI_Isolation_Workaround { #include <inspectable.h> #include <WeakReference.h> } using namespace ABI_Isolation_Workaround; #include <wrl/client.h> using namespace Microsoft::WRL; using namespace Windows::Foundation::Collections; IVector<String^>^ GetTypeMethods(Object^); MainPage::MainPage() { InitializeComponent(); Windows::Foundation::Uri^ uri = ref new Windows::Foundation::Uri("http://buildwindows.com/"); auto methods = GetTypeMethods(uri); std::wstring strMethods; std::for_each(begin(methods), end(methods), [&strMethods](../standard-library/string.md methodName) { strMethods += methodName->Data(); strMethods += L"\n"; }); wprintf_s(L"%s\n", strMethods.c_str()); } IVector<String^>^ GetTypeMethods(Object^ instance) { HRESULT hr; HSTRING hStringClassName; hr = instance->__cli_GetRuntimeClassName(reinterpret_cast<__cli_HSTRING__**>(&hStringClassName)); // internal method name subject to change post BUILD if (FAILED(hr)) __cli_WinRTThrowError(hr); // internal method name subject to change post BUILD String^ className = reinterpret_cast<String^>(hStringClassName); ComPtr<IMetaDataDispenserEx> metadataDispenser;ComPtr<IMetaDataImport2> metadataImport;hr = MetaDataGetDispenser(CLSID_CorMetaDataDispenser, IID_IMetaDataDispenser, (LPVOID*)metadataDispenser.GetAddressOf()); if (FAILED(hr)) __cli_WinRTThrowError(hr); // internal method name subject to change post BUILD HSTRING hStringFileName; mdTypeDef typeDefToken; hr = RoGetMetaDataFile(hStringClassName, metadataDispenser.Get(), &hStringFileName, &metadataImport, &typeDefToken); if (FAILED(hr)) __cli_WinRTThrowError(hr); // internal method name subject to change post BUILD String^ fileName = reinterpret_cast<String^>(hStringFileName); HCORENUM hCorEnum = 0; mdMethodDef methodDefs[2048]; ULONG countMethodDefs = sizeof(methodDefs); hr = metadataImport->EnumMethods(&hCorEnum, typeDefToken, methodDefs, countMethodDefs,  &countMethodDefs); if (FAILED(hr)) __cli_WinRTThrowError(hr); // internal method name subject to change post BUILD wchar_t methodName[1024]; ULONG countMethodName; std::wstring strMethods; Vector<String^>^ retVal = ref new Vector<String^>(); for(int i = 0; i < countMethodDefs; ++i) { countMethodName = sizeof(methodName); hr = metadataImport->GetMethodProps(methodDefs[i], nullptr, methodName, countMethodName, &countMethodName, nullptr, nullptr, nullptr, nullptr, nullptr); if (SUCCEEDED(hr)) { methodName[ countMethodName ] = 0; retVal->Append(ref new String(methodName)); } } return retVal; }  
  
```  
  
## Vedere anche  
 [Interoperabilità con altri linguaggi](../cppcx/interoperating-with-other-languages-c-cx.md)