---
title: Errore irreversibile U1073 di NMAKE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- U1073
dev_langs:
- C++
helpviewer_keywords:
- U1073
ms.assetid: d46bf2dd-400a-4802-9db2-f832e1c97f02
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4c309ed94cd1c984406e0d21f0139e35c6e41d7d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46053940"
---
# <a name="nmake-fatal-error-u1073"></a>Errore irreversibile U1073 di NMAKE 

informazioni su come rendere 'targetname'

La destinazione specificata non esiste e non esiste un comando da eseguire o nelle regole di inferenza da applicare.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Controllare l'ortografia del nome della destinazione.

1. Se *targetname* è pseudo, specificarla come destinazione in un altro blocco di descrizione.

1. Se *targetname* è una chiamata di macro, assicurarsi non si espande in una stringa null.