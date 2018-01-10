---
title: Raccolta di controlli di isolamento delle comuni MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: MFC, Common Controls library
ms.assetid: 7471e6f0-49b0-47f7-86e7-8d6bc3541694
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 04ed1be46d4c3d7f36bfa501bfc933fbba41e8d1
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="isolation-of-the-mfc-common-controls-library"></a>Isolamento della libreria di controlli comuni MFC
La libreria di controlli comuni a questo punto è isolata all'interno di MFC, consentendo di moduli diversi (ad esempio sulle DLL dell'utente) per utilizzare versioni diverse della libreria di controlli comuni, specificando la versione nei cui manifesti.  
  
 Un'applicazione MFC (o codice utente chiamata da MFC) effettua chiamate alla libreria di controlli comuni API tramite le funzioni wrapper denominate `Afx` *FunctionName*, dove *FunctionName* è il nome di un comune Controlli API. Tali funzioni wrapper vengono definiti in afxcomctl32.h e afxcomctl32.inl.  
  
 È possibile utilizzare il [AFX_COMCTL32_IF_EXISTS](reference/run-time-object-model-services.md#afx_comctl32_if_exists) e [AFX_COMCTL32_IF_EXISTS2](reference/run-time-object-model-services.md#afx_comctl32_if_exists2) macro (definito in afxcomctl32.h) per determinare se la raccolta di controlli comuni implementa un'API di anziché chiamare [GetProcAddress](../build/getprocaddress.md).  
  
 Tecnicamente, con cui si effettuano chiamate alle API di libreria di controlli comuni tramite una classe wrapper, `CComCtlWrapper` (definito in afxcomctl32.h). `CComCtlWrapper`è inoltre responsabile per il caricamento e scaricamento di comctl32.dll. Lo stato del modulo MFC contiene un puntatore a un'istanza di `CComCtlWrapper`. È possibile accedere la classe wrapper con la `afxComCtlWrapper` (macro).  
  
 Si noti che la chiamata API controlli comune direttamente (non utilizzando le funzioni wrapper MFC) da un MFC applicazione o DLL dell'utente funzionerà nella maggior parte dei casi, perché l'applicazione MFC o DLL dell'utente è associato alla libreria di controlli comuni di richiesta nel proprio manifesto). Tuttavia, il codice MFC deve utilizzare i wrapper, poiché il codice MFC può essere chiamato da DLL dell'utente con diverse versioni della libreria di controlli comuni.

