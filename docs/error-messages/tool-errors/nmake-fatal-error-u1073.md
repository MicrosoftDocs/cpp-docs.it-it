---
description: 'Altre informazioni su: errore irreversibile U1073 di NMAKE'
title: 'Errore irreversibile U1073 di NMAKE '
ms.date: 11/04/2016
f1_keywords:
- U1073
helpviewer_keywords:
- U1073
ms.assetid: d46bf2dd-400a-4802-9db2-f832e1c97f02
ms.openlocfilehash: bd622f37720cf5e992a1d82ea97ca1ff50344c0c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97345446"
---
# <a name="nmake-fatal-error-u1073"></a>Errore irreversibile U1073 di NMAKE 

non si sa come creare ' TargetName '

La destinazione specificata non esiste e non è disponibile alcun comando da eseguire o per applicare la regola di inferenza.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Controllare l'ortografia del nome di destinazione.

1. Se *TargetName* è un pseudo-destinazione, specificarlo come destinazione in un altro blocco di descrizione.

1. Se *TargetName* è una chiamata di macro, assicurarsi che non si espande in una stringa null.
