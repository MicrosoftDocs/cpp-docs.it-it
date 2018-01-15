---
title: 'Procedura: attivare e utilizzare un componente Windows Runtime mediante WRL | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs: C++
ms.assetid: 54828f02-6af3-45d1-b965-d0104442f8d5
caps.latest.revision: "17"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 9179b701506da7a714569a940543a95634439583
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-activate-and-use-a-windows-runtime-component-using-wrl"></a>Procedura: attivare e utilizzare un componente Windows Runtime mediante WRL
Questo documento viene illustrato come utilizzare la libreria di modelli C++ (WRL) di Windows Runtime per inizializzare il Runtime di Windows e come attivare e utilizzare un componente Windows Runtime.  
  
> [!NOTE]
>  In questo esempio viene attivato un componente Windows Runtime incorporato. Per informazioni su come creare componenti personalizzati che è possibile attivare in modo simile, vedere [procedura dettagliata: creazione di un componente Windows Runtime base](../windows/walkthrough-creating-a-basic-windows-runtime-component-using-wrl.md).  
  
 Per utilizzare un componente, è necessario acquistare un puntatore a interfaccia per il tipo implementato dal componente. E poiché la tecnologia sottostante di Windows Runtime è il modello COM (Component Object), è necessario seguire le regole COM per gestire un'istanza del tipo. Ad esempio, è necessario mantenere il *conteggio dei riferimenti* che determina quando il tipo viene eliminato dalla memoria.  
  
 Per semplificare l'utilizzo di Windows Runtime, libreria di modelli di Windows Runtime C++ fornisce il modello di puntatore intelligente, [ComPtr\<T >](../windows/comptr-class.md), che esegue automaticamente il conteggio dei riferimenti. Quando si dichiara una variabile, specificare `ComPtr<` *-nome dell'interfaccia* `>` *identificatore*. Per accedere a un membro di interfaccia, applicare l'operatore freccia di accesso ai membri (`->`) per l'identificatore.  
  
> [!IMPORTANT]
>  Quando si chiama una funzione di interfaccia, verificare sempre il `HRESULT` valore restituito.  
  
## <a name="activating-and-using-a-windows-runtime-component"></a>Attivazione e all'utilizzo di un componente Windows Runtime  
 I seguenti passaggi viene utilizzata la `Windows::Foundation::IUriRuntimeClass` interfaccia per illustrare come creare una factory di attivazione per un componente Windows Runtime, creare un'istanza del componente e recuperare un valore della proprietà. È inoltre illustrato come inizializzare il Runtime di Windows. Segue un esempio completo.  
  
> [!IMPORTANT]
>  Sebbene in genere, si utilizza la libreria di modelli C++ di Windows Runtime in un'app Universal Windows Platform, questo esempio Usa un'applicazione console a scopo illustrativo. Le funzioni come `wprintf_s` non sono disponibili da un'app Universal Windows Platform. Per ulteriori informazioni sui tipi e funzioni che è possibile utilizzare in un'app Universal Windows Platform, vedere [funzioni CRT non supportate con /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx) e [Win32 e COM per Windows Store apps](http://msdn.microsoft.com/library/windows/apps/br205757.aspx).  
  
#### <a name="to-activate-and-use-a-windows-runtime-component"></a>Per attivare e utilizzare un componente Windows Runtime  
  
1.  Includere (`#include`) le richieste di Windows Runtime, libreria di modelli di Windows Runtime C++ o delle intestazioni della libreria Standard C++.  
  
     [!code-cpp[wrl-consume-component#2](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_1.cpp)]  
  
     Si consiglia di utilizzare la direttiva `using namespace` nel file con estensione cpp per rendere il codice più leggibile.  
  
2.  Inizializzare il thread in cui viene eseguito l'app. Ogni app è necessario inizializzare il thread e un modello di threading. Questo esempio viene utilizzato il [Microsoft::WRL::Wrappers::RoInitializeWrapper](../windows/roinitializewrapper-class.md) per inizializzare il Runtime di Windows e specifica [RO_INIT_MULTITHREADED](http://msdn.microsoft.com/library/windows/apps/br224661.aspx) come il modello di threading. Il `RoInitializeWrapper` classe chiamate `Windows::Foundation::Initialize` in fase di costruzione, e `Windows::Foundation::Uninitialize` quando viene eliminato.  
  
     [!code-cpp[wrl-consume-component#3](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_2.cpp)]  
  
     Nella seconda istruzione, il [RoInitializeWrapper::HRESULT](../windows/roinitializewrapper-hresult-parens-operator.md) operatore restituisce il `HRESULT` dalla chiamata a `Windows::Foundation::Initialize`.  
  
3.  Creare un *factory di attivazione* per il `ABI::Windows::Foundation::IUriRuntimeClassFactory` interfaccia.  
  
     [!code-cpp[wrl-consume-component#4](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_3.cpp)]  
  
     Il Runtime di Windows utilizza nomi completi per identificare i tipi. Il `RuntimeClass_Windows_Foundation_Uri` parametro è una stringa che viene fornita da Windows Runtime e contiene il nome di classe di runtime richiesto.  
  
4.  Inizializzare un [Microsoft::WRL::Wrappers::HString](../windows/hstring-class.md) variabile che rappresenta l'URI `"http://www.microsoft.com"`.  
  
     [!code-cpp[wrl-consume-component#6](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_4.cpp)]  
  
     In Windows Runtime, si non allocare memoria per una stringa che verrà utilizzato il Runtime di Windows. Al contrario, il Runtime di Windows crea una copia della stringa di in un buffer che gestisce e viene utilizzato per le operazioni e quindi restituisce un handle per il buffer che creato.  
  
5.  Utilizzare il `IUriRuntimeClassFactory::CreateUri` metodo factory per creare un `ABI::Windows::Foundation::IUriRuntimeClass` oggetto.  
  
     [!code-cpp[wrl-consume-component#7](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_5.cpp)]  
  
6.  Chiamare il `IUriRuntimeClass::get_Domain` metodo per recuperare il valore di `Domain` proprietà.  
  
     [!code-cpp[wrl-consume-component#8](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_6.cpp)]  
  
7.  Stampare il nome di dominio nella console e restituire. Tutti gli oggetti `ComPtr` e RAII lasciano l'ambito e vengono rilasciati automaticamente.  
  
     [!code-cpp[wrl-consume-component#9](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_7.cpp)]  
  
     Il [WindowsGetStringRawBuffer](http://msdn.microsoft.com/library/windows/apps/br224636.aspx) funzione recupera il formato Unicode sottostante della stringa URI.  
  
 Di seguito è riportato un esempio completo:  
  
 [!code-cpp[wrl-consume-component#1](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_8.cpp)]  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `wrl-consume-component.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **file runtimeobject.lib cpp utilizzare wrl CL.exe**  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria di modelli di Windows Runtime C++ (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md)