---
title: "Risoluzione dei problemi relativi alle eccezioni: System.Runtime.InteropServices.COMException | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "EHCOM"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "COMException (classe)"
ms.assetid: 14b6de51-e039-4db7-9321-06c9e16e328a
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.Runtime.InteropServices.COMException
Un'eccezione <xref:System.Runtime.InteropServices.COMException> viene generata quando viene restituito un HRESULT non riconosciuto da una chiamata a un metodo COM.  
  
## Suggerimenti associati  
 **Controllare la proprietà ErrorCode dell'eccezione per determinare HRESULT restituito dall'oggetto COM.**  
 Quando rileva un HRESULT non riconosciuto, il runtime genera un'eccezione <xref:System.Runtime.InteropServices.COMException> che include una proprietà pubblica `ErrorCode` contenente l'HRESULT restituito dalla chiamata. Se è disponibile un messaggio di errore, al chiamante verrà restituito tale messaggio. Se invece lo sviluppatore del componente COM non include un messaggio di errore, in sostituzione della stringa del messaggio verrà restituito l'HRESULT di otto cifre. La disponibilità di un HRESULT consente al chiamante di determinare la causa dell'eccezione. Per altre informazioni, vedere [How to: Map HRESULTs and Exceptions](../Topic/How%20to:%20Map%20HRESULTs%20and%20Exceptions.md).  
  
 **Disattivare il processo di hosting.**  
 COM viene utilizzato per la comunicazione tra [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] e il processo host. Poiché viene utilizzato prima dell'esecuzione del codice, una chiamata a `CoInitializeSecurity` causerà la generazione di questa eccezione.  
  
### Note  
 Common Language Runtime \(CLR\) trasforma gli HRESULT noti in eccezioni .NET, in modo da consentire agli oggetti COM di restituire ai client gestiti informazioni significative sugli errori. Il mapping tra HRESULT ed eccezione può essere eseguito anche in senso inverso, restituendo HRESULT specifici a client non gestiti.  
  
 Quando si passano parametri con associazione tardiva a metodi di oggetti di Microsoft Office, se si tratta di oggetti COM è possibile che venga generata un'eccezione <xref:System.Runtime.InteropServices.COMException>. Il gestore di associazione tardiva presuppone che nelle chiamate ai metodi venga utilizzato un parametro `ByRef` e che la proprietà passata disponga di una funzione di accesso `Set`. Se la proprietà non dispone di tale funzione, [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)] genererà un'eccezione <xref:System.MissingMethodException> \(HRESULT CORE\_E\_MISSINGMETHOD\). Per ovviare a questo problema, utilizzare oggetti con associazione anticipata oppure passare una variabile anziché una proprietà dell'oggetto.  
  
## Vedere anche  
 <xref:System.Runtime.InteropServices.COMException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Gestione di eccezioni per interoperabilità COM](../Topic/Handling%20COM%20Interop%20Exceptions.md)