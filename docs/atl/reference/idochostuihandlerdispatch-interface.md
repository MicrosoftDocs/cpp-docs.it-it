---
title: "IDocHostUIHandlerDispatch Interface | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IDocHostUIHandlerDispatch"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IDocHostUIHandlerDispatch interface"
ms.assetid: 6963a301-601a-4ac3-8bef-f7b252ea2fc6
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# IDocHostUIHandlerDispatch Interface
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un'interfaccia all'analisi e al motore di rendering di HTML Microsoft.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Sintassi  
  
```  
  
interface IDocHostUIHandlerDispatch : IDispatch  
  
```  
  
## Membri  
  
### Metodi pubblici  
  
> [!NOTE]
>  I collegamenti nella tabella seguente vengono ad argomenti di riferimento di INet SDK per i membri di interfaccia [IDocUIHostHandler](https://msdn.microsoft.com/en-us/library/aa753260.aspx).  `IDocHostUIHandlerDispatch` ha la stessa funzionalità **IDocUIHostHandler**, con la differenza che rappresenta tale `IDocHostUIHandlerDispatch` è un'interfaccia dispatch come **IDocUIHostHandler** è un'interfaccia personalizzata.  
  
|||  
|-|-|  
|[\<caps:sentence id\="tgt7" sentenceid\="bbafd0070a97938421603b1ef8409510" class\="tgtSentence"\>EnableModeless\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/aa753253.aspx)|Chiamato dall'implementazione di MSHTML [IOleInPlaceActiveObject::EnableModeless](http://msdn.microsoft.com/library/windows/desktop/ms680115).  Inoltre chiamato quando il MSHTML visualizzare l'interfaccia utente modale.|  
|[\<caps:sentence id\="tgt10" sentenceid\="2cfbfb70fe0af79263134b694d06311c" class\="tgtSentence"\>FilterDataObject\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/aa753254.aspx)|Ha chiamato all'host MSHTML da consentire che l'host sostituire l'oggetto dati di MSHTML.|  
|[\<caps:sentence id\="tgt12" sentenceid\="715255e2d7f611c97308a373328e19a0" class\="tgtSentence"\>GetDropTarget\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/aa753255.aspx)|Chiamato da MSHTML quando si utilizza come destinazione per consentire all'host di fornire [IDropTarget](http://msdn.microsoft.com/library/windows/desktop/ms679679)alternativo.|  
|[\<caps:sentence id\="tgt14" sentenceid\="5a51a8633a0d2036f843073d6f35a4af" class\="tgtSentence"\>GetExternal\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/aa753256.aspx)|Chiamato da MSHTML per ottenere l'interfaccia IDispatch dell'host.|  
|[\<caps:sentence id\="tgt16" sentenceid\="ce27e0c2f7ebb0aaa2f9088818dc8347" class\="tgtSentence"\>GetHostInfo\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/aa753257.aspx)|Recupera le funzionalità di interfaccia utente dell'host MSHTML è incluso.|  
|[\<caps:sentence id\="tgt18" sentenceid\="693bd2149b17c4586cdc167e13e59f0a" class\="tgtSentence"\>GetOptionKeyPath\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/aa753258.aspx)|Restituisce la chiave del Registro di sistema in cui il MSHTML archiviano le preferenze utente.|  
|[\<caps:sentence id\="tgt20" sentenceid\="7fce94585b477684cc21a38fe9ee288c" class\="tgtSentence"\>HideUI\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/aa753259.aspx)|Chiamato quando il MSHTML rimuove i relativi menu e barre degli strumenti.|  
|[\<caps:sentence id\="tgt22" sentenceid\="359e4dcbd80b962decf88ef02d66fe14" class\="tgtSentence"\>OnDocWindowActivate\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/aa753261.aspx)|Chiamato dall'implementazione di MSHTML [IOleInPlaceActiveObject::OnDocWindowActivate](http://msdn.microsoft.com/library/windows/desktop/ms687281).|  
|[\<caps:sentence id\="tgt24" sentenceid\="8e472d7f3f3064d2ee6fdddd83002b86" class\="tgtSentence"\>OnFrameWindowActivate\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/aa753262.aspx)|Chiamato dall'implementazione di MSHTML [IOleInPlaceActiveObject::OnFrameWindowActivate](http://msdn.microsoft.com/library/windows/desktop/ms683969).|  
|[\<caps:sentence id\="tgt26" sentenceid\="3fd38deec5e9f4201074e886bfb178a5" class\="tgtSentence"\>ResizeBorder\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/aa753263.aspx)|Chiamato dall'implementazione di MSHTML [IOleInPlaceActiveObject::ResizeBorder](http://msdn.microsoft.com/library/windows/desktop/ms680053).|  
|[\<caps:sentence id\="tgt28" sentenceid\="2f382ba3de5494d18b20ccfa348f795e" class\="tgtSentence"\>ShowContextMenu\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/aa753264.aspx)|Chiamato da MSHTML per visualizzare un menu di scelta rapida.|  
|[\<caps:sentence id\="tgt30" sentenceid\="c6978c4c8ab30ae8380439da613bb63c" class\="tgtSentence"\>ShowUI\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/aa753265.aspx)|Consente di sostituire l'host di menu e barre degli strumenti di MSHTML.|  
|[\<caps:sentence id\="tgt32" sentenceid\="97bfd5aead25a2d9870b38da4b6745cd" class\="tgtSentence"\>TranslateAccelerator\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/aa753266.aspx)|Chiamato da MSHTML quando [IOleInPlaceActiveObject::TranslateAccelerator](http://msdn.microsoft.com/library/windows/desktop/ms693360) o [IOleControlSite::TranslateAccelerator](http://msdn.microsoft.com/library/windows/desktop/ms693756) viene chiamato.|  
|[\<caps:sentence id\="tgt34" sentenceid\="55c20a6fb6b05f6059d72b2854a7d7e2" class\="tgtSentence"\>TranslateUrl\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/aa753267.aspx)|Chiamato da MSHTML per concedere all'host di modificare l'url da caricare.|  
|[\<caps:sentence id\="tgt36" sentenceid\="8fdf7c2c3ebf5fa12ecc909279c951ff" class\="tgtSentence"\>UpdateUI\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/aa753268.aspx)|Notifica all'host che lo stato di comando è stato modificato.|  
  
## Note  
 Un host può sostituire i menu, barre degli strumenti e menu di scelta rapida utilizzati in traccia di Microsoft HTML e motore di rendering \(MSHTML\) implementando l'interfaccia.  
  
## Requisiti  
 La definizione di questa interfaccia è disponibile come IDL o C\+\+, come illustrato di seguito.  
  
|Tipo di definizione|File|  
|-------------------------|----------|  
|IDL|ATLIFace.idl|  
|C\+\+|ATLIFace.h \(anche incluso in ATLBase.h\)|  
  
## Vedere anche  
 [IDocUIHostHandler](https://msdn.microsoft.com/en-us/library/aa753260.aspx)