---
title: Flag di controllo
ms.date: 11/04/2016
f1_keywords:
- c.flags
helpviewer_keywords:
- flags, control
- heap allocation, control flags
- debug heap, control flags
ms.assetid: 8dbd24a5-0633-42d1-9771-776db338465f
ms.openlocfilehash: 7ac5f239ea4d242618fb23ba617a3a6539492053
ms.sourcegitcommit: dedd4c3cb28adec3793329018b9163ffddf890a4
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 03/11/2019
ms.locfileid: "57750114"
---
# <a name="control-flags"></a>Flag di controllo

La versione di debug della libreria di runtime C Microsoft utilizza i seguenti flag per controllare l'allocazione dell'heap ed il processo di creazione rapporti. Per altre informazioni, vedere [Tecniche di debug CRT](/visualstudio/debugger/crt-debugging-techniques).

|Flag|Description|
|----------|-----------------|
|[_CRTDBG_MAP_ALLOC](../c-runtime-library/crtdbg-map-alloc.md)|Esegue il mapping delle funzioni degli heap di base alle rispettive controparti di versione di debug|
|[_DEBUG](../c-runtime-library/debug.md)|Consente l'utilizzo delle versioni di debug delle funzioni di runtime|
|[_crtDbgFlag](../c-runtime-library/crtdbgflag.md)|Controlla come il gestore dell'heap di debug tiene traccia delle allocazioni|

Questi flag possono essere definiti con un'opzione della riga di comando /D o con una direttiva `#define`. Quando il flag è definito con `#define`, la direttiva deve essere visualizzata prima che il file di intestazione includa l'istruzione per le dichiarazioni di routine.

## <a name="see-also"></a>Vedere anche

[Variabili globali e tipi standard](../c-runtime-library/global-variables-and-standard-types.md)
