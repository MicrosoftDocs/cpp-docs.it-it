---
title: "Procedura: attivare e utilizzare un componente Windows Runtime mediante WRL | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 54828f02-6af3-45d1-b965-d0104442f8d5
caps.latest.revision: 17
caps.handback.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: attivare e utilizzare un componente Windows Runtime mediante WRL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo documento viene illustrato come utilizzare [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] \([!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)]\) per inizializzare [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] e come attivare e utilizzare un componente [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  
  
> [!NOTE]
>  Questo esempio consente di attivare un componente incorporato di [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  Per informazioni su come creare un componente attivabile in modo analogo, vedere [Procedura dettagliata: creazione di un componente Windows Runtime di base](../windows/walkthrough-creating-a-basic-windows-runtime-component-using-wrl.md).  
  
 Per utilizzare un componente, è necessario acquistare un puntatore dell'interfaccia al tipo che viene implementato dal componente.  E poiché la tecnologia sottostante a [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] è il Component Object Model \(COM\), è necessario seguire le regole di COM per gestire un'istanza del tipo.  Ad esempio, è necessario gestire *il conteggio dei riferimenti* che determinano quando il tipo viene eliminato dalla memoria.  
  
 Per semplificare l'utilizzo di [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)], [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] fornisce il modello del puntatore intelligente, [ComPtr\<T\>](../windows/comptr-class.md), che esegue automaticamente il conteggio dei riferimenti.  Quando si dichiara una variabile, specificare `ComPtr<`*interface\-name*`>` *identifier*.  Per accedere a un membro di interfaccia, applicare l'operatore di accesso ai membri freccia \(`->`\) all'identificatore.  
  
> [!IMPORTANT]
>  Quando si chiama una funzione dell'interfaccia, verificare sempre il valore restituito di `HRESULT`.  
  
## Attivare e utilizzare un componente di Windows Runtime  
 I passaggi seguenti utilizzano l'interfaccia `Windows::Foundation::IUriRuntimeClass` per illustrare come creare una factory di attivazione di un componente di [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)], creare un'istanza di tale componente e recuperare un valore di proprietà.  Viene inoltre illustrato come inizializzare [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].  Di seguito viene fornito l'esempio completo.  
  
> [!IMPORTANT]
>  Sebbene in genere si utilizza [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] in un'applicazione [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)], in questo esempio viene utilizzata un'applicazione console a scopo illustrativo.  Le funzioni come `wprintf_s` non sono disponibili in un'applicazione di [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)].  Per ulteriori informazioni sui tipi e le funzioni che è possibile utilizzare in un'applicazione [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)], vedere [Funzioni CRT non supportate con \/ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx) e [Win32 e COM per le applicazioni Windows Store](http://msdn.microsoft.com/library/windows/apps/br205757.aspx).  
  
#### Per attivare e utilizzare un componente Windows Runtime  
  
1.  Includere \(`#include`\) qualsiasi intestazione di libreria standard C\+\+ [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] o [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] obbligatoria.  
  
     [!code-cpp[wrl-consume-component#2](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_1.cpp)]  
  
     Si consiglia di utilizzare la direttiva `using namespace` nel file con estensione cpp per rendere il codice più leggibile.  
  
2.  Inizializzazione del thread in cui viene eseguita l'applicazione.  Ogni applicazione deve inizializzare il proprio thread e il proprio modello di threading.  In questo esempio viene utilizzata la classe [Microsoft::WRL::Wrappers::RoInitializeWrapper](../windows/roinitializewrapper-class.md) per inizializzare [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] e viene specificato [RO\_INIT\_MULTITHREADED](http://msdn.microsoft.com/library/windows/apps/br224661.aspx) come modello di threading.  La classe di `RoInitializeWrapper` chiama `Windows::Foundation::Initialize` alla costruzione e `Windows::Foundation::Uninitialize` quando viene eliminata.  
  
     [!code-cpp[wrl-consume-component#3](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_2.cpp)]  
  
     Nella seconda istruzione, l'operatore [RoInitializeWrapper::HRESULT](../windows/roinitializewrapper-hresult-parens-operator.md) restituisce `HRESULT` alla chiamata a `Windows::Foundation::Initialize`.  
  
3.  Creare una *factory di attivazione* per l'interfaccia `ABI::Windows::Foundation::IUriRuntimeClassFactory`.  
  
     [!code-cpp[wrl-consume-component#4](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_3.cpp)]  
  
     I nomi completi di [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] da utilizzare per identificare i tipi.  Il parametro `RuntimeClass_Windows_Foundation_Uri` è una stringa fornita da [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] e contiene il nome di classe di runtime richiesta.  
  
4.  Inizializzare una variabile [Microsoft::WRL::Wrappers::HString](../windows/hstring-class.md) che rappresenta l'URI `"http://www.microsoft.com"`.  
  
     [!code-cpp[wrl-consume-component#6](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_4.cpp)]  
  
     In [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)], non viene allocata memoria per una stringa che [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] utilizzerà.  Al contrario, [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] crea una copia della stringa in un buffer che gestisce e utilizza per le operazioni, e restituisce l'handle al buffer creato.  
  
5.  Utilizzare i metodi factory `IUriRuntimeClassFactory::CreateUri` per creare un oggetto `ABI::Windows::Foundation::IUriRuntimeClass`.  
  
     [!code-cpp[wrl-consume-component#7](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_5.cpp)]  
  
6.  Chiamare il metodo `IUriRuntimeClass::get_Domain` per recuperare il valore della proprietà `Domain`.  
  
     [!code-cpp[wrl-consume-component#8](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_6.cpp)]  
  
7.  Stampa il nome del dominio nella console e restituire un valore.  Tutti gli oggetti `ComPtr` e RAII lasciano l'ambito e vengono rilasciati automaticamente.  
  
     [!code-cpp[wrl-consume-component#9](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_7.cpp)]  
  
     La funzione [WindowsGetStringRawBuffer](http://msdn.microsoft.com/library/windows/apps/br224636.aspx) recupera il form Unicode sottostante della stringa URI.  
  
 Di seguito è disponibile l'esempio completo.  
  
 [!code-cpp[wrl-consume-component#1](../windows/codesnippet/CPP/how-to-activate-and-use-a-windows-runtime-component-using-wrl_8.cpp)]  
  
## Compilazione del codice  
 Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio, o incollarlo in un file denominato `wrl-consume-component.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe wrl\-consume\-component.cpp runtimeobject.lib**  
  
## Vedere anche  
 [Libreria di modelli di Windows Runtime C\+\+ \(WRL\)](../windows/windows-runtime-cpp-template-library-wrl.md)