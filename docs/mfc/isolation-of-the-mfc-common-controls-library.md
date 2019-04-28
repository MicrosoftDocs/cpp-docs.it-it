---
title: Isolamento della libreria di controlli comuni MFC
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, Common Controls library
ms.assetid: 7471e6f0-49b0-47f7-86e7-8d6bc3541694
ms.openlocfilehash: 94700f850be62404f22974a1d5e76acad711555c
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62310864"
---
# <a name="isolation-of-the-mfc-common-controls-library"></a>Isolamento della libreria di controlli comuni MFC

La libreria di controlli comuni a questo punto è isolata all'interno di MFC, consentendo di moduli diversi (ad esempio DLL dell'utente) per usare versioni diverse della libreria di controlli comuni, specificando la versione nei cui manifesti.

Un'applicazione MFC (o codice utente chiamata da MFC) effettua chiamate alla libreria di controlli comuni API tramite le funzioni wrapper denominate `Afx` *FunctionName*, dove *FunctionName* è il nome di un comune Controlli API. Le funzioni wrapper vengono definite in afxcomctl32.inl e afxcomctl32.h.

È possibile usare la [AFX_COMCTL32_IF_EXISTS](reference/run-time-object-model-services.md#afx_comctl32_if_exists) e [AFX_COMCTL32_IF_EXISTS2](reference/run-time-object-model-services.md#afx_comctl32_if_exists2) macro (definiti in afxcomctl32.h) per determinare se la libreria di controlli comuni implementa una determinata API invece di chiamare [GetProcAddress](../build/getprocaddress.md).

Tecnicamente, si effettuano chiamate alle API di libreria di controlli comuni tramite una classe wrapper, `CComCtlWrapper` (definiti in afxcomctl32.h). `CComCtlWrapper` è inoltre responsabile per il caricamento e scaricamento di comctl32.dll. Lo stato del modulo MFC contiene un puntatore a un'istanza di `CComCtlWrapper`. È possibile accedere la classe wrapper che usa il `afxComCtlWrapper` macro.

Si noti che la chiamata direttamente l'API controlli comuni (non utilizzando le funzioni wrapper MFC) da un MFC DLL dell'utente o applicazione funzionerà nella maggior parte dei casi, perché l'applicazione MFC o DLL dell'utente è associato alla libreria di controlli comuni richieste nel proprio manifesto). Tuttavia, il codice MFC dovrà usare il wrapper, poiché codice MFC può essere chiamato dalle DLL dell'utente con diverse versioni della libreria di controlli comuni.
