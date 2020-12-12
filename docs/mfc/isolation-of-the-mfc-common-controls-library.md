---
description: 'Altre informazioni su: isolamento della libreria di controlli comuni MFC'
title: Isolamento della libreria di controlli comuni MFC
ms.date: 11/04/2016
helpviewer_keywords:
- MFC, Common Controls library
ms.assetid: 7471e6f0-49b0-47f7-86e7-8d6bc3541694
ms.openlocfilehash: f3e0f6ad981a690f6212455b8af891eaa97f2642
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97335825"
---
# <a name="isolation-of-the-mfc-common-controls-library"></a>Isolamento della libreria di controlli comuni MFC

La libreria di controlli comuni è ora isolata in MFC, consentendo a diversi moduli, ad esempio le DLL utente, di usare versioni diverse della libreria di controlli comuni specificando la versione nei rispettivi manifesti.

Un'applicazione MFC (o codice utente chiamato da MFC) effettua chiamate alle API della libreria di controlli comuni tramite funzioni wrapper denominate `Afx` *FunctionName*, dove *FunctionName* è il nome di un'API dei controlli comuni. Tali funzioni wrapper sono definite in afxcomctl32. h e afxcomctl32. inl.

È possibile usare le macro [AFX_COMCTL32_IF_EXISTS](reference/run-time-object-model-services.md#afx_comctl32_if_exists) e [AFX_COMCTL32_IF_EXISTS2](reference/run-time-object-model-services.md#afx_comctl32_if_exists2) (definite in afxcomctl32. h) per determinare se la libreria di controlli comuni implementa una determinata API anziché chiamare [GetProcAddress](../build/getprocaddress.md).

Tecnicamente, si effettuano chiamate alle API della libreria di controlli comuni tramite una classe wrapper `CComCtlWrapper` (definita in afxcomctl32. h). `CComCtlWrapper` è anche responsabile del caricamento e dello scaricamento dei comctl32.dll. Lo stato del modulo MFC contiene un puntatore a un'istanza di `CComCtlWrapper` . È possibile accedere alla classe wrapper usando la `afxComCtlWrapper` macro.

Si noti che la chiamata diretta all'API dei controlli comuni (senza usare le funzioni wrapper MFC) da un'applicazione MFC o da una DLL utente funzionerà nella maggior parte dei casi, perché la DLL dell'applicazione o dell'utente MFC è associata alla libreria di controlli comuni richiesta nel manifesto). Tuttavia, il codice MFC deve usare i wrapper, perché il codice MFC potrebbe essere chiamato da dll utente con diverse versioni della libreria di controlli comuni.
