---
title: "Informazioni di HRESULT nel codice gestito | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "HRESULT, Vspackage gestito"
  - "Vspackage, Informazioni su HRESULT"
ms.assetid: 0795ee94-17a8-4327-bf57-27cd5e312a4c
caps.latest.revision: 29
caps.handback.revision: 29
manager: "douge"
---
# Informazioni di HRESULT nel codice gestito
L'interazione tra codice gestito e COM può causare problemi in presenza di valori restituiti HRESULT.  
  
 In un'interfaccia COM un valore restituito HRESULT può avere le funzioni seguenti:  
  
-   Fornire informazioni sugli errori \(ad esempio <xref:Microsoft.VisualStudio.VSConstants.E_INVALIDARG>\).  
  
-   Fornire informazioni sullo stato in relazione al normale comportamento del programma.  
  
 Quando COM esegue una chiamata nel codice gestito, i valori HRESULT possono causare questi problemi:  
  
-   Le funzioni COM che restituiscono valori HRESULT minori di zero \(codici di errore\) generano eccezioni.  
  
-   I metodi COM che restituiscono regolarmente due o più codici di riuscita diversi, ad esempio <xref:Microsoft.VisualStudio.VSConstants.S_OK> o <xref:Microsoft.VisualStudio.VSConstants.S_FALSE>, non possono essere distinti.  
  
 Poiché molte delle funzioni COM di [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] restituiscono valori HRESULT minori di zero o codici di riuscita diversi, gli assembly di interoperabilità di [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] sono stati scritti in modo da mantenete le firme dei metodi. Tutti i metodi di interoperabilità di [!INCLUDE[vsipsdk](../mfc/includes/vsipsdk_md.md)] sono di tipo `int`. I valori HRESULT vengono passati attraverso il livello di interoperabilità senza modifica e senza generare eccezioni.  
  
 Poiché una funzione COM restituisce un valore HRESULT al metodo gestito che la chiama, il metodo chiamante deve controllare il valore HRESULT e generare eccezioni, se necessario.  
  
## Gestione di valori HRESULT restituiti al codice gestito da COM  
 Quando si chiama un'interfaccia COM dal codice gestito, esaminare il valore HRESULT e generare un'eccezione, se necessario. La classe <xref:Microsoft.VisualStudio.ErrorHandler> contiene il metodo <xref:Microsoft.VisualStudio.ErrorHandler.ThrowOnFailure%2A>, che genera un'eccezione COM, a seconda del valore HRESULT passato.  
  
 Per impostazione predefinita, <xref:Microsoft.VisualStudio.ErrorHandler.ThrowOnFailure%2A> genera un'eccezione ogni volta che viene passato un valore HRESULT minore di zero. Nei casi in cui tali valori HRESULT sono valori accettabili e non deve essere generata alcuna eccezione, i valori HRESULT aggiuntivi devono essere passati a <xref:Microsoft.VisualStudio.ErrorHandler.ThrowOnFailure%2A> dopo essere stati testati. Se il valore HRESULT testato corrisponde a qualsiasi valore HRESULT passato in modo esplicito a <xref:Microsoft.VisualStudio.ErrorHandler.ThrowOnFailure%2A>, non viene generata alcuna eccezione.  
  
> [!NOTE]
>  La classe <xref:Microsoft.VisualStudio.VSConstants> contiene le costanti per i valori HRESULT comuni, ad esempio <xref:Microsoft.VisualStudio.VSConstants.S_OK> e <xref:Microsoft.VisualStudio.VSConstants.E_NOTIMPL>, e i valori HRESULT di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], ad esempio <xref:Microsoft.VisualStudio.VSConstants.VS_E_INCOMPATIBLEDOCDATA> e <xref:Microsoft.VisualStudio.VSConstants.VS_E_UNSUPPORTEDFORMAT>.<xref:Microsoft.VisualStudio.VSConstants> fornisce inoltre i metodi <xref:Microsoft.VisualStudio.ErrorHandler.Succeeded%2A> e <xref:Microsoft.VisualStudio.ErrorHandler.Failed%2A>, che corrispondono alle macro SUCCEEDED e FAILED in COM.  
  
 Si consideri, ad esempio, la seguente chiamata di funzione, in cui <xref:Microsoft.VisualStudio.VSConstants.E_NOTIMPL> è un valore restituito accettabile, ma qualsiasi altro valore HRESULT minore di zero rappresenta un errore.  
  
 [!code-vb[VSSDKHRESULTInformation#1](../misc/codesnippet/VisualBasic/hresult-information-in-managed-code_1.vb)]
 [!code-cs[VSSDKHRESULTInformation#1](../misc/codesnippet/CSharp/hresult-information-in-managed-code_1.cs)]  
  
 Se ci sono più valori restituiti accettabili, è sufficiente aggiungere gli ulteriori valori HRESULT all'elenco nella chiamata a <xref:Microsoft.VisualStudio.ErrorHandler.ThrowOnFailure%2A>.  
  
 [!code-vb[VSSDKHRESULTInformation#2](../misc/codesnippet/VisualBasic/hresult-information-in-managed-code_2.vb)]
 [!code-cs[VSSDKHRESULTInformation#2](../misc/codesnippet/CSharp/hresult-information-in-managed-code_2.cs)]  
  
## Restituzione di valori HRESULT a COM dal codice gestito  
 Se non si verifica alcuna eccezione, il codice gestito restituisce <xref:Microsoft.VisualStudio.VSConstants.S_OK> alla funzione COM che lo ha chiamato. L'interoperabilità COM supporta eccezioni comuni fortemente tipizzate nel codice gestito. Ad esempio, un metodo che riceve un argomento `null` non accettabile, genera un'eccezione <xref:System.ArgumentNullException>.  
  
 Se non si è certi di quale eccezione generare, ma si conosce il valore HRESULT che si vuole restituire a COM, è possibile usare il metodo <xref:System.Runtime.InteropServices.Marshal.ThrowExceptionForHR%2A> per generare un'eccezione appropriata. Ciò funziona anche con un errore non standard, ad esempio <xref:Microsoft.VisualStudio.VSConstants.VS_E_INCOMPATIBLEDOCDATA>.<xref:System.Runtime.InteropServices.Marshal.ThrowExceptionForHR%2A> prova a eseguire il mapping tra valore HRESULT passato e un'eccezione fortemente tipizzata. Se ciò non è possibile, genera un'eccezione COM generica. Il risultato finale è che il valore HRESULT passato a <xref:System.Runtime.InteropServices.Marshal.ThrowExceptionForHR%2A> dal codice gestito viene restituito alla funzione COM che lo ha chiamato.  
  
> [!NOTE]
>  Le eccezioni compromettono le prestazioni e servono per indicare condizioni anomale dei programmi. Le condizioni che si verificano spesso devono essere gestite inline, invece di generare un'eccezione.  
  
## Vedere anche  
 [VSPackage gestiti](../misc/managed-vspackages.md)   
 [Interoperating with Unmanaged Code](../Topic/Interoperating%20with%20Unmanaged%20Code.md)   
 [How to: Map HRESULTs and Exceptions](../Topic/How%20to:%20Map%20HRESULTs%20and%20Exceptions.md)   
 [Compilazione di componenti COM per l'interoperabilità](http://msdn.microsoft.com/it-it/7a2c657a-cfef-40f0-bed3-7c2c0ac4abdf)   
 [VSPackage gestiti](../misc/managed-vspackages.md)