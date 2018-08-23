---
title: 'Procedura: attivare e utilizzare un componente di Windows Runtime mediante WRL | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
dev_langs:
- C++
ms.assetid: 54828f02-6af3-45d1-b965-d0104442f8d5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: c3dc1743b0c0b795d7aaa10a7a47689de2336094
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42600395"
---
# <a name="how-to-activate-and-use-a-windows-runtime-component-using-wrl"></a>Procedura: attivare e utilizzare un componente Windows Runtime mediante WRL

Questo documento illustra come usare la libreria di modelli C++ (WRL) di Windows Runtime per inizializzare il Runtime di Windows e su come attivare e utilizzare un componente Windows Runtime.

Per usare un componente, è necessario acquisire un puntatore a interfaccia per il tipo che viene implementato dal componente. E poiché la tecnologia sottostante di Windows Runtime è il modello COM (Component Object), è necessario seguire le regole COM per gestire un'istanza del tipo. Ad esempio, è necessario gestire il *conteggio dei riferimenti* che determina quando il tipo viene eliminato dalla memoria.

Per semplificare l'uso di Windows Runtime, libreria modelli C++ per Windows Runtime fornisce il modello di puntatore intelligente [ComPtr\<T >](../windows/comptr-class.md), che esegue automaticamente il conteggio dei riferimenti. Quando si dichiara una variabile, specificare `ComPtr<` *interface-name* `>` *identificatore*. Per accedere a un membro di interfaccia, applicare l'operatore freccia di accesso ai membri (`->`) nell'identificatore.

> [!IMPORTANT]
> Quando si chiama una funzione di interfaccia, verificare sempre il valore restituito HRESULT.

## <a name="activating-and-using-a-windows-runtime-component"></a>Attivazione e l'utilizzo di un componente di Runtime di Windows

La procedura seguente usa il `Windows::Foundation::IUriRuntimeClass` interfaccia per illustrare come creare una factory di attivazione per un componente Windows Runtime, creare un'istanza del componente e recuperare un valore della proprietà. Tali esempi mostrano anche come inizializzare il Runtime di Windows. Segue un esempio completo.

> [!IMPORTANT]
> Sebbene in genere si usa la libreria di modelli C++ di Windows Runtime in un'app Universal Windows Platform (UWP), questo esempio Usa un'app console a scopo illustrativo. Le funzioni come `wprintf_s` non sono disponibili in un'app UWP. Per altre informazioni sui tipi e funzioni che è possibile usare in un'app UWP, vedere [funzioni CRT non supportate nelle App della piattaforma Windows Universal](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md) e [Win32 e COM per App UWP](/uwp/win32-and-com/win32-and-com-for-uwp-apps).

#### <a name="to-activate-and-use-a-windows-runtime-component"></a>Per attivare e utilizzare un componente Windows Runtime

1. Includere (`#include`) le richieste di Windows Runtime, libreria modelli C++ per Windows Runtime o delle intestazioni della libreria Standard C++.

   [!code-cpp[wrl-consume-component#2](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_1.cpp)]

   Si consiglia di utilizzare la direttiva `using namespace` nel file con estensione cpp per rendere il codice più leggibile.

2. Inizializzare il thread in cui viene eseguita l'app. Ogni app deve inizializzare il thread e threading di modello. Questo esempio Usa la [Microsoft::WRL::Wrappers::RoInitializeWrapper](../windows/roinitializewrapper-class.md) per inizializzare il Runtime di Windows e specifica [RO_INIT_MULTITHREADED](http://msdn.microsoft.com/library/windows/apps/br224661.aspx) come il modello di threading. Il `RoInitializeWrapper` classe chiamate `Windows::Foundation::Initialize` in fase di costruzione, e `Windows::Foundation::Uninitialize` quando viene eliminato definitivamente.

   [!code-cpp[wrl-consume-component#3](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_2.cpp)]

   Nella seconda istruzione, il [RoInitializeWrapper::HRESULT](../windows/roinitializewrapper-hresult-parens-operator.md) operatore restituirà il `HRESULT` dalla chiamata a `Windows::Foundation::Initialize`.

3. Creare un *factory di attivazione* per il `ABI::Windows::Foundation::IUriRuntimeClassFactory` interfaccia.

   [!code-cpp[wrl-consume-component#4](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_3.cpp)]

   Il Runtime di Windows utilizza nomi completi per identificare i tipi. Il `RuntimeClass_Windows_Foundation_Uri` parametro è una stringa che viene fornita dal Runtime di Windows e che contiene il nome di classe di runtime necessari.

4. Inizializzare un [Microsoft::WRL::Wrappers::HString](../windows/hstring-class.md) variabile che rappresenta l'URI `"http://www.microsoft.com"`.

   [!code-cpp[wrl-consume-component#6](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_4.cpp)]

   Nel Runtime di Windows, è non allocare memoria per una stringa che verrà utilizzato il Runtime di Windows. Al contrario, il Runtime di Windows crea una copia della stringa in un buffer che lo gestisce Usa per le operazioni e quindi restituisce un handle per il buffer che creato.

5. Usare la `IUriRuntimeClassFactory::CreateUri` metodo factory per creare un `ABI::Windows::Foundation::IUriRuntimeClass` oggetto.

   [!code-cpp[wrl-consume-component#7](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_5.cpp)]

6. Chiamare il `IUriRuntimeClass::get_Domain` metodo per recuperare il valore della `Domain` proprietà.

   [!code-cpp[wrl-consume-component#8](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_6.cpp)]

7. Stampa il nome di dominio nella console e restituire. Tutti gli oggetti `ComPtr` e RAII lasciano l'ambito e vengono rilasciati automaticamente.

   [!code-cpp[wrl-consume-component#9](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_7.cpp)]

   Il [WindowsGetStringRawBuffer](http://msdn.microsoft.com/library/windows/apps/br224636.aspx) funzione recupera il formato Unicode sottostante della stringa URI.

Ecco un esempio completo:

[!code-cpp[wrl-consume-component#1](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_8.cpp)]

## <a name="compiling-the-code"></a>Compilazione del codice

Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `wrl-consume-component.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

`cl.exe wrl-consume-component.cpp runtimeobject.lib`

## <a name="see-also"></a>Vedere anche

[Libreria di modelli di Windows Runtime C++ (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md)