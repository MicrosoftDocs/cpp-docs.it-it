---
title: "Procedura: creare direttamente un&#39;istanza dei componenti WRL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: 1a9fa011-0cee-4abf-bf83-49adf53ff906
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Procedura: creare direttamente un&#39;istanza dei componenti WRL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Imparare a utilizzare [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] \([!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)]\) [Microsoft::WRL::Make](../windows/make-function.md) e le funzioni [Microsoft::WRL::Details::MakeAndInitialize](../windows/makeandinitialize-function.md) per creare un'istanza di un componente dal modulo che lo definisce.  
  
 Istanziando direttamente i componenti, è possibile ridurre il sovraccarico quando non è necessario disporre delle class factory o di altri meccanismi.  È possibile creare un'istanza di un componente direttamente in entrambe le applicazioni [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] e nelle applicazioni desktop.  
  
 Per informazioni su come utilizzare [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] per creare un componente di base di [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] e per crearne un'istanza da un'applicazione esterna [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)], vedere [Procedura dettagliata: creazione di un componente Windows Runtime di base](../windows/walkthrough-creating-a-basic-windows-runtime-component-using-wrl.md).  Per informazioni su come utilizzare [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)] per creare un componente di base COM classico e crearne un'istanza da un'applicazione desktop esterna, vedere [Procedura: creare un componente COM classico](../windows/how-to-create-a-classic-com-component-using-wrl.md).  
  
 Questo documento mostra due esempi.  Nel primo esempio viene utilizzata la funzione `Make` per creare un'istanza di un componente.  Nel secondo esempio viene utilizzata la funzione `MakeAndInitialize` per creare un'istanza di un componente che può andare in corso a fallimento durante la costruzione. Poiché COM utilizza in genere i valori `HRESULT`, invece delle eccezioni, per indicare gli errori, un tipo COM in genere non fa uso di throw dal suo costruttore.  `MakeAndInitialize` consente a un componente di convalidare gli argomenti di costruzione con il metodo `RuntimeClassInitialize` \). Entrambi gli esempi definiscono un'interfaccia logger di base ed implementano tale interfaccia definendo una classe che scrive messaggi sulla console.  
  
> [!IMPORTANT]
>  Non è possibile utilizzare l'operatore `new` per creare un'istanza dei componenti [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)].  Di conseguenza, è consigliabile utilizzare sempre `Make` o `MakeAndInitialize` per creare direttamente un'istanza di un componente.  
  
### Per creare ed istanziare un componente logger di base  
  
1.  In Visual Studio creare un progetto **Applicazione Console Win32**.  Denominare il progetto, ad esempio, `WRLLogger`.  
  
2.  Aggiungere un file **File MIDL \(.idl\)** al progetto, denominare il file `ILogger.idl`, quindi aggiungere il codice seguente:  
  
     [!code-cpp[wrl-logger-make#1](../windows/codesnippet/CPP/how-to-instantiate-wrl-components-directly_1.idl)]  
  
3.  Sostituire il contenuto di WRLLogger.cpp con il codice seguente.  
  
     [!code-cpp[wrl-logger-make#2](../windows/codesnippet/CPP/how-to-instantiate-wrl-components-directly_2.cpp)]  
  
### Per gestire gli errori di creazione per il componente logger di base  
  
1.  Sostituire la definizione della classe `CConsoleWriter` con il codice riportato di seguito.  Questa versione utilizza una variabile membro privata di tipo stringa ed esegue l'override del metodo `RuntimeClass::RuntimeClassInitialize`.  `RuntimeClassInitialize` ha esito negativo se la chiamata a `SHStrDup` ha anch'essa esito negativo.  
  
     [!code-cpp[wrl-logger-makeandinitialize#1](../windows/codesnippet/CPP/how-to-instantiate-wrl-components-directly_3.cpp)]  
  
2.  Sostituire la definizione di `wmain` con il codice seguente.  Questa versione utilizza `MakeAndInitialize` per creare un'istanza dell'oggetto `CConsoleWriter` e controlla il risultato di `HRESULT`.  
  
     [!code-cpp[wrl-logger-makeandinitialize#2](../windows/codesnippet/CPP/how-to-instantiate-wrl-components-directly_4.cpp)]  
  
## Vedere anche  
 [Libreria di modelli di Windows Runtime C\+\+ \(WRL\)](../windows/windows-runtime-cpp-template-library-wrl.md)   
 [Microsoft::WRL::Make](../windows/make-function.md)   
 [Microsoft::WRL::Details::MakeAndInitialize](../windows/makeandinitialize-function.md)