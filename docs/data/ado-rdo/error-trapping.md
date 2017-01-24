---
title: "Intercettazione degli errori | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ActiveX (controlli) [C++], intercettazione degli errori"
  - "intercettazione degli errori [C++]"
ms.assetid: c509b089-a542-44be-8f22-dc5832967a48
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Intercettazione degli errori
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nell'associazione dati l'intercettazione degli errori viene assicurata in due modi: tramite eventi di errore e oggetti Error.  
  
##  <a name="vcreferrortrappingviaerrorevents"></a> Intercettazione degli errori mediante eventi di errore  
 Sia i controlli dati ADO che i controlli RemoteData RDO presentano eventi di errore.  In genere si imposta un gestore eventi di errore.  I gestori eventi presentano la seguente firma:  
  
```  
void CMyDlg::OnErrorAdodc1(long ErrorNumber,  
                           BSTR* FAR Description,  
                           long Scode,  
                           LPCTSTR Source,  
                           LPCTSTR HelpFile,  
                           long HelpContext,  
                           BOOL FAR* fCancelDisplay)  
```  
  
 In genere il campo Description è compilato, ma i campi ErrorNumber e Scode sono compilati solo nel caso di errori COM.  Un gestore eventi standard visualizza il contenuto del campo Description in una finestra di messaggio.  Di seguito è riportato un esempio.  
  
```  
{  
   USES_CONVERSION;     
// note: have to include the ATL file ATLConv.h to use the ATL conversion macros  
   ::AfxMessageBox(OLE2T(*Description), MB_OK);  
}  
```  
  
 I controlli dati ADO e i controlli RemoteData RDO sono tuttavia già impostati per l'intercettazione degli eventi di errore, pertanto non è necessario alcun codice specifico.  
  
##  <a name="vcreferrortrappingviaerrorobjects"></a> Intercettazione degli errori mediante oggetti Error  
 Sia ADO che RDO dispongono di oggetti Error.  Quando si generano le [classi wrapper](../../data/ado-rdo/wrapper-classes.md), il controllo RemoteData RDO genera wrapper per oggetti Error, ma il controllo dati ADO no.  
  
 Il controllo dati ADO visualizza automaticamente i messaggi di errore ADO.  
  
## Vedere anche  
 [Associazione dati con controlli ActiveX in Visual C\+\+](../../data/ado-rdo/databinding-with-activex-controls-in-visual-cpp.md)