---
title: "CSettingsStoreSP Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CSettingsStoreSP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSettingsStoreSP class"
ms.assetid: bcd37f40-cfd4-4d17-a5ce-3bfabe995dcc
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 20
---
# CSettingsStoreSP Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CSettingsStoreSP` è una classe di supporto che è possibile utilizzare per creare istanze [CSettingsStore Class](../../mfc/reference/csettingsstore-class.md).  
  
## Sintassi  
  
```  
class CSettingsStoreSP  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSettingsStoreSP::CSettingsStoreSP](../Topic/CSettingsStoreSP::CSettingsStoreSP.md)|Costruisce un oggetto `CSettingsStoreSP`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSettingsStoreSP::Create](../Topic/CSettingsStoreSP::Create.md)|Crea un'istanza di una classe derivata da `CSettingsStore`.|  
|[CSettingsStoreSP::SetRuntimeClass](../Topic/CSettingsStoreSP::SetRuntimeClass.md)|Imposta la classe di runtime.  Il metodo `Create` utilizza la classe di runtime per determinare la classe di oggetti da creare.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`m_dwUserData`|Dati utente personalizzato che viene archiviato nell'oggetto `CSettingsStoreSP`.  Si specificano questi dati nel costruttore dell'oggetto `CSettingsStoreSP`.|  
|`m_pRegistry`|`CSettingsStore`oggetto derivato dal metodo `Create` crea.|  
  
## Note  
 È possibile utilizzare la classe `CSettingsStoreSP` per reindirizzare tutte le operazioni di MFC Registro di sistema in altri percorsi, ad esempio un file XML o un database.  A tale scopo, attenersi ai passaggi riportati di seguito:  
  
1.  Creare una classe \(come `CMyStore`\) e derivila da `CSettingsStore`.  
  
2.  Utilizzare le macro [IMPLEMENT\_DYNCREATE](../Topic/IMPLEMENT_DYNCREATE.md) e [DECLARE\_DYNCREATE](../Topic/DECLARE_DYNCREATE.md) con la classe personalizzata `CSettingsStore` per abilitare la creazione dinamica.  
  
3.  Eseguire l'override delle funzioni virtuali e implementare le funzioni `Write` e `Read` nella classe personalizzata.  Implementare qualsiasi altra funzionalità per leggere e scrivere dati nella posizione desiderata.  
  
4.  Nell'applicazione, chiamata `CSettingsStoreSP::SetRuntimeClass` e sessione in un puntatore a [CRuntimeClass Structure](../../mfc/reference/cruntimeclass-structure.md) ottenuto dalla classe.  
  
 Ogni volta che il framework in genere accedrebbe il Registro di sistema, si crea dinamicamente un'istanza della classe personalizzata e si utilizzerà per leggere o scrivere dati.  
  
 `CSettingsStoreSP::SetRuntimeClass` utilizza una variabile statica globale.  Di conseguenza, solo un archivio personalizzato è disponibile per volta.  
  
## Requisiti  
 **intestazione:** afxsettingsstore.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CSettingsStore Class](../../mfc/reference/csettingsstore-class.md)