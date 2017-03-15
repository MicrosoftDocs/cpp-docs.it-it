---
title: "Classe ICommandTextImpl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ICommandText"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ICommandText (classe)"
ms.assetid: 9c2715cc-1e55-4468-8327-85341617ed46
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe ICommandTextImpl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce un'implementazione per l'interfaccia di [ICommandText](https://msdn.microsoft.com/en-us/library/ms714914.aspx).  
  
## Sintassi  
  
```  
template <class T >  
class ATL_NO_VTABLE ICommandTextImpl   
   : public ICommandImpl<T, ICommandText>  
```  
  
#### Parametri  
 `T`  
 La classe di comando derivata da **ICommandTextImpl**.  
  
## Membri  
  
### Metodi di interfaccia  
  
|||  
|-|-|  
|[GetCommandText](../../data/oledb/icommandtextimpl-getcommandtext.md)|Restituisce il comando di tipo testo impostato dall'ultima chiamata a [SetCommandText](../../data/oledb/icommandtextimpl-setcommandtext.md).|  
|[SetCommandText](../../data/oledb/icommandtextimpl-setcommandtext.md)|Imposta il testo del comando, sostituendo il testo del comando esistente.|  
  
### Membri di dati  
  
|||  
|-|-|  
|[m\_strCommandText](../../data/oledb/icommandtextimpl-m-strcommandtext.md)|Archiviare il testo del comando.|  
  
## Note  
 Un'interfaccia richiesta sui controlli.  
  
## Requisiti  
 **Intestazione:** altdb.h  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)