---
title: "CDumpContext Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDumpContext"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AfxDump object"
  - "CDumpContext class"
  - "diagnosi, diagnostic classes"
  - "diagnostic classes"
  - "diagnostica, diagnostic classes"
ms.assetid: 98c52b2d-14b5-48ed-b423-479a4d1c60fa
caps.latest.revision: 20
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDumpContext Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Supporta all'output orientato al flusso di diagnostica sotto forma di testo leggibile.  
  
## Sintassi  
  
```  
class CDumpContext  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDumpContext::CDumpContext](../Topic/CDumpContext::CDumpContext.md)|Costruisce un oggetto `CDumpContext`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDumpContext::DumpAsHex](../Topic/CDumpContext::DumpAsHex.md)|Esegue il dump l'elemento visualizzato in formato esadecimale.|  
|[CDumpContext::Flush](../Topic/CDumpContext::Flush.md)|Elimina i dati nel buffer del contesto di dump.|  
|[CDumpContext::GetDepth](../Topic/CDumpContext::GetDepth.md)|Ottiene un numero intero che corrisponde alla profondità del dump.|  
|[CDumpContext::HexDump](../Topic/CDumpContext::HexDump.md)|Byte di dump contenuti in una matrice in formato esadecimale.|  
|[CDumpContext::SetDepth](../Topic/CDumpContext::SetDepth.md)|Imposta la profondità del dump.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDumpContext::operator \<\<](../Topic/CDumpContext::operator%20%3C%3C.md)|Variabili e oggetti consente di inserire nel contesto di dump.|  
  
## Note  
 `CDumpContext` non dispone di una classe base.  
  
 È possibile utilizzare [afxDump](../Topic/afxDump%20\(CDumpContext%20in%20MFC\).md), un oggetto predeclared `CDumpContext`, per la maggior parte del eseguire il dump.  L'oggetto `afxDump` è disponibile solo nella versione di debug della libreria MFC.  
  
 Diversi di utilizzo `afxDump`[servizi diagnostici](../../mfc/reference/diagnostic-services.md) di memoria per il relativo output.  
  
 Nell'ambiente di Windows, l'output dell'oggetto predefinito `afxDump`, concettualmente simile a quella corrente `cerr`, viene indirizzato al debugger tramite la funzione Windows **OutputDebugString**.  
  
 La classe `CDumpContext` dispone di un operatore di overload di inserimento \(**\<\<**\) per puntatori a `CObject` che effettua il dump dei dati dell'oggetto.  Se è necessario un formato dump personalizzato per un oggetto derivato, eseguire l'override [CObject::Dump](../Topic/CObject::Dump.md).  La maggior parte delle classi MFC \(Microsoft Foundation implementano una funzione membro `Dump` ignorata.  
  
 Le classi che non sono derivate da `CObject`, come `CString`, `CTime`e `CTimeSpan`, con i propri operatori di overload di inserimento `CDumpContext`, analogamente alle strutture spesso utilizzate come **CFileStatus**, `CPoint`e `CRect`.  
  
 Se si utilizza [IMPLEMENT\_DYNAMIC](../Topic/IMPLEMENT_DYNAMIC.md) macro o [IMPLEMENT\_SERIAL](../Topic/IMPLEMENT_SERIAL.md) nell'implementazione della classe, quindi `CObject::Dump` verrà stampato il nome del `CObject`classe derivata da.  In caso contrario, verrà `CObject`.  
  
 La classe `CDumpContext` è disponibile sia con il le versioni di debug e di rilascio della raccolta, ma la funzione membro `Dump` è definita solo nella versione di debug.  Utilizzare **\#ifdef \_DEBUG** \/istruzioni `#endif` per inquadrare il codice di diagnostica, incluse le funzioni membro personalizzate `Dump`.  
  
 Prima di creare il proprio oggetto `CDumpContext`, è necessario creare un oggetto `CFile` da utilizzare come destinazione del dump.  
  
 Per ulteriori informazioni su `CDumpContext`, vedere [Eseguire il debug di applicazioni MFC](../Topic/MFC%20Debugging%20Techniques.md).  
  
 **\_DEBUG \#define**  
  
## Gerarchia di ereditarietà  
 `CDumpContext`  
  
## Requisiti  
 **Header:** afx.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFile Class](../../mfc/reference/cfile-class.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)