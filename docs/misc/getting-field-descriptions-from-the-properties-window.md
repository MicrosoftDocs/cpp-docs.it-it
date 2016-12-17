---
title: "Descrizioni dei campi dalla finestra Propriet&#224; | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "finestra Proprietà, descrizioni dei campi"
ms.assetid: 7d92bb6a-b9b9-4cd8-99e9-b5ee129b52a3
caps.latest.revision: 9
caps.handback.revision: 9
manager: "douge"
---
# Descrizioni dei campi dalla finestra Propriet&#224;
Nella parte inferiore della finestra **Proprietà** è disponibile un'area per la descrizione che visualizza informazioni relative al campo della proprietà selezionata. Questa funzionalità è attivata per impostazione predefinita. Se si vuole nascondere il campo della descrizione, fare clic con il pulsante destro del mouse nella finestra **Proprietà** e fare clic su **Descrizione**. In questo modo viene anche rimosso il segno di spunta accanto al titolo **Descrizione** nella finestra del menu. È possibile visualizzare di nuovo il campo con la stessa procedura per riattivare il campo **Descrizione**.  
  
 Le informazioni visualizzate nel campo della descrizione derivano da <xref:Microsoft.VisualStudio.OLE.Interop.ITypeInfo>. Per ogni metodo, interfaccia, coclasse e così via può esistere un attributo `helpstring` non localizzato nella libreria dei tipi. La finestra **Proprietà** recupera la stringa da <xref:Microsoft.VisualStudio.OLE.Interop.ITypeInfo.GetDocumentation%2A>.  
  
### Per specificare stringhe della Guida localizzate  
  
1.  Aggiungere l'attributo `helpstringdll` all'istruzione library nella libreria dei tipi \(`typelib`\).  
  
    > [!NOTE]
    >  Questo passaggio è facoltativo se la libreria dei tipi è inclusa in un file di libreria di oggetti \(con estensione olb\).  
  
2.  Specificare gli attributi `helpstringcontext` per le stringhe. È anche possibile specificare attributi `helpstring`.  
  
     Questi attributi sono distinti dagli attributi `helpfile` e `helpcontext`, contenuti negli argomenti della Guida nei file effettivi con estensione chm.  
  
 Per recuperare le informazioni di descrizione da visualizzare per il nome della proprietà evidenziata, la finestra **Proprietà** chiama <xref:System.Runtime.InteropServices.ComTypes.ITypeInfo2.GetDocumentation2%2A> per la proprietà selezionata, specificando l'attributo `lcid` desiderato per la stringa di output. Internamente, <xref:System.Runtime.InteropServices.ComTypes.ITypeInfo2> trova il file DLL specificato nell'attributo `helpstringdll` e chiama `DLLGetDocumentation` su tale file DLL con il contesto e l'attributo `lcid` specificati.  
  
 La firma e l'implementazione di `DLLGetDocumentation` sono:  
  
```  
STDAPI DLLGetDocumentation  
(  
   ITypeLib * /* ptlib */,  
   ITypeInfo * /* ptinfo */,  
   LCID /* lcid */,  
   DWORD dwCtx,  
   BSTR * pbstrHelpString  
);  
```  
  
 La funzione `DLLGetDocumentation` deve essere un'esportazione definita nel file con estensione def per la DLL.  
  
 Internamente, viene creato un file con estensione olb che è in effetti una DLL. Questa DLL contiene una sola risorsa, il file della libreria dei tipi \(con estensione tlb\) e una funzione esportata, `DLLGetDocumentation`.  
  
 Nel caso dei file con estensione olb, l'attributo `helpstringdll` è facoltativo perché si tratta dello stesso file che contiene il file con estensione tlb.  
  
 Per recuperare le stringhe da visualizzare nel riquadro **Descrizione**, quindi, è necessario come minimo specificare l'attributo `helpstring` nella libreria dei tipi. Se si vuole localizzare le stringhe, è necessario specificare l'attributo facoltativo `helpstringdll` e l'attributo obbligatorio `helpstringcontext`, quindi implementare `DLLGetDocumentation`.  
  
 Non è necessario implementare altre interfacce quando si recuperano le informazioni localizzate tramite l'attributo `helpstringcontext` dell'istruzione IDL e `DLLGetDocumentation`.  
  
 Un altro modo per ottenere il nome e la descrizione localizzati per una proprietà è implementando <xref:Microsoft.VisualStudio.Shell.Interop.IVsPerPropertyBrowsing.GetLocalizedPropertyInfo%2A>. Per altre informazioni sull'implementazione di questo metodo, vedere [Interfacce e i campi di proprietà finestra](../Topic/Properties%20Window%20Fields%20and%20Interfaces.md).  
  
## Vedere anche  
 <xref:Microsoft.VisualStudio.Shell.Interop.IVsPerPropertyBrowsing>   
 [Interfacce e i campi di proprietà finestra](../Topic/Properties%20Window%20Fields%20and%20Interfaces.md)   
 [Estensione delle proprietà](../Topic/Extending%20Properties.md)   
 [helpstringdll](../windows/helpstringdll.md)   
 [helpstring](../windows/helpstring.md)   
 [helpstringcontext](../windows/helpstringcontext.md)   
 [helpcontext](../windows/helpcontext.md)   
 [helpfile](../windows/helpfile.md)   
 [lcid](../windows/lcid.md)