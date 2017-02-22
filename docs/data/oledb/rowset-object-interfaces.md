---
title: "Interfacce dell&#39;oggetto Rowset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "interfacce, elenco"
  - "interfacce, OLE DB"
  - "modelli del provider OLE DB, interfacce oggetto"
  - "OLE DB, interfacce"
  - "oggetti rowset [OLE DB]"
ms.assetid: 0d7a5d48-2fe4-434f-a84b-157c1fdc3494
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Interfacce dell&#39;oggetto Rowset
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nella tabella che segue sono elencate le interfacce facoltative e obbligatorie definite da OLE DB per un oggetto Rowset.  
  
|Interfaccia|Obbligatorio?|Implementazione da parte dei modelli OLE DB|  
|-----------------|-------------------|-------------------------------------------------|  
|[\<caps:sentence id\="tgt5" sentenceid\="d33d5718660dbb261dc40b878ec4b591" class\="tgtSentence"\>IAccessor\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms719672.aspx)|Obbligatorio|Yes|  
|[\<caps:sentence id\="tgt8" sentenceid\="28dbf41d74f2a648a563b28d2ecef878" class\="tgtSentence"\>IColumnsInfo\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms724541.aspx)|Obbligatorio|Yes|  
|[\<caps:sentence id\="tgt11" sentenceid\="280d1ffb462810568a6fdc7ed49c472c" class\="tgtSentence"\>IConvertType\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms715926.aspx)|Obbligatorio|Yes|  
|[\<caps:sentence id\="tgt14" sentenceid\="d5e86d5adb921fd6e7b7616e2cc6d0b1" class\="tgtSentence"\>IRowset\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms720986.aspx)|Obbligatorio|Yes|  
|[\<caps:sentence id\="tgt17" sentenceid\="7b1c6d3c5946bb65aba4e55669cac68a" class\="tgtSentence"\>IRowsetInfo\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms724541.aspx)|Obbligatorio|Yes|  
|[\<caps:sentence id\="tgt20" sentenceid\="5e5cd95860891cad64474412ee90af1a" class\="tgtSentence"\>IChapteredRowset\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms718180.aspx)|Facoltativo|No|  
|[\<caps:sentence id\="tgt23" sentenceid\="671ad6d1edc944c30078e9779bea81c9" class\="tgtSentence"\>IColumnsInfo2\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms712953.aspx)|Facoltativo|No|  
|[\<caps:sentence id\="tgt26" sentenceid\="6317b9d062ca4ded11773f5df0c39062" class\="tgtSentence"\>IColumnsRowset\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms722657.aspx)|Facoltativo|No|  
|[\<caps:sentence id\="tgt29" sentenceid\="63e99e63156fc90f114fa402662387ef" class\="tgtSentence"\>IConnectionPointContainer\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/ms683857)|Facoltativo|Sì \(tramite ATL\)|  
|[\<caps:sentence id\="tgt32" sentenceid\="6dc1de1d52cfbefb671e60c2a7b1f89e" class\="tgtSentence"\>IDBAsynchStatus\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms709832.aspx)|Facoltativo|No|  
|[\<caps:sentence id\="tgt35" sentenceid\="cb55d5f0bbff2943ea833e6589e835ff" class\="tgtSentence"\>IGetRow\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms718047.aspx)|Facoltativo|No|  
|[\<caps:sentence id\="tgt38" sentenceid\="5cf35ba4349e6da426be07d34952411e" class\="tgtSentence"\>IRowsetChange\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms715790.aspx)|Facoltativo|Yes|  
|[\<caps:sentence id\="tgt41" sentenceid\="2a923dbb71e4a064bcf351fa90271863" class\="tgtSentence"\>IRowsetChapterMember\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms725430.aspx)|Facoltativo|No|  
|[\<caps:sentence id\="tgt44" sentenceid\="00a324374d659337476924e5102f04c5" class\="tgtSentence"\>IRowsetCurrentIndex\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms709700.aspx)|Facoltativo|No|  
|[\<caps:sentence id\="tgt47" sentenceid\="10f6850c6aa126774a1d937b6ec6d3fb" class\="tgtSentence"\>IRowsetFind\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms724221.aspx)|Facoltativo|No|  
|[\<caps:sentence id\="tgt50" sentenceid\="6f7deea1588ac1cc7f77f6df70c1434b" class\="tgtSentence"\>IRowsetIdentity\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms715913.aspx)|Facoltativa \(ma obbligatoria per i provider di livello 0\)|Yes|  
|[\<caps:sentence id\="tgt53" sentenceid\="e3f7c5b1879950f9342e7cced01273f3" class\="tgtSentence"\>IRowsetIndex\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms719604.aspx)|Facoltativo|No|  
|[\<caps:sentence id\="tgt56" sentenceid\="92f23aaea36b3e3b3f1b4b456d4b0f8a" class\="tgtSentence"\>IRowsetLocate\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms721190.aspx)|Facoltativo|Yes|  
|[\<caps:sentence id\="tgt59" sentenceid\="a509122e4f7b09d76c968a5d3cee6757" class\="tgtSentence"\>IRowsetRefresh\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms714892.aspx)|Facoltativo|No|  
|[\<caps:sentence id\="tgt62" sentenceid\="151e636103f6679064656728e4630284" class\="tgtSentence"\>IRowsetScroll\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms712984.aspx)|Facoltativo|No|  
|[\<caps:sentence id\="tgt65" sentenceid\="869692d9e5c7b7dc7dcfdaf30a7bd348" class\="tgtSentence"\>IRowsetUpdate\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms714401.aspx)|Facoltativo|Yes|  
|[\<caps:sentence id\="tgt68" sentenceid\="27946685b7e1a1c23dd6257c28381045" class\="tgtSentence"\>IRowsetView\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms709755.aspx)|Facoltativo|No|  
|[\<caps:sentence id\="tgt71" sentenceid\="130702210bcc45e1afd88b1f2aae1a0b" class\="tgtSentence"\>ISupportErrorInfo\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms715816.aspx)|Facoltativo|Yes|  
|[\<caps:sentence id\="tgt74" sentenceid\="756fe7b70235269e75e7c4627abc795c" class\="tgtSentence"\>IRowsetBookmark\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/ms714246.aspx)|Facoltativo|No|  
  
 L'oggetto Rowset generato dalla procedura guidata implementa `IAccessor`, `IRowset` e `IRowsetInfo` tramite ereditarietà.  `IAccessorImpl` associa entrambe le colonne di output.  L'interfaccia `IRowset` gestisce e recupera righe e dati.  L'interfaccia `IRowsetInfo` gestisce le proprietà del rowset.  
  
## Vedere anche  
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)