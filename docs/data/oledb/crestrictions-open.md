---
title: "CRestrictions::Open | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CRestrictions.Open"
  - "ATL::CRestrictions::Open"
  - "ATL.CRestrictions.Open"
  - "CRestrictions::Open"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Open (metodo)"
ms.assetid: 0aff0cc3-543a-47d2-8d6b-ebb36926b6db
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# CRestrictions::Open
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce un set di risultati in base alle restrizioni fornite dall'utente.  
  
## Sintassi  
  
```  
  
      HRESULT Open(  
   const CSession& session,  
   LPCTSTR lpszParam 1 = NULL,  
   LPCTSTR lpszParam 2 = NULL,  
   LPCTSTR lpszParam 3 = NULL,  
   LPCTSTR lpszParam 4 = NULL,  
   LPCTSTR lpszParam 5 = NULL,  
   LPCTSTR lpszParam 6 = NULL,  
   LPCTSTR lpszParam 7 = NULL,  
   bool bBind = true  
);  
```  
  
#### Parametri  
 `session`  
 \[in\] Specifica un oggetto sessione esistente utilizzato per la connessione all'origine dati.  
  
 *lpszParam*  
 \[in\] Specifica le restrizioni sul rowset dello schema.  
  
 `bBind`  
 \[in\] Specifica se associare la mappa delle colonne automaticamente.  L'impostazione predefinita è **true**, che comporta l'associazione automatica della mappa delle colonne.  Impostando `bBind` su **false** si previene l'associazione automatica della mappa delle colonne così questa può essere associata manualmente. \(L'associazione manuale è di particolare interesse per gli utenti di OLAP.\)  
  
## Valore restituito  
 Uno dei valori standard di `HRESULT`.  
  
## Note  
 È possibile specificare al massimo sette restrizioni per un rowset dello schema.  
  
 Vedere [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx) per informazioni sulle restrizioni definite su ciascun rowset dello schema.  
  
## Requisiti  
 **Intestazione:** atldbsch.h  
  
## Vedere anche  
 [Classe CRestrictions](../../data/oledb/crestrictions-class.md)   
 [Classi Rowset dello schema e classi Typedef](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)