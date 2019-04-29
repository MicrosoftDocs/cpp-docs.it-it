---
title: Errore irreversibile C1055
ms.date: 11/04/2016
f1_keywords:
- C1055
helpviewer_keywords:
- C1055
ms.assetid: a9fb9190-d7eb-4d5f-b1a2-a41e584a28c1
ms.openlocfilehash: e6df4870d7af49c369be7e513791955599c48326
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62390646"
---
# <a name="fatal-error-c1055"></a>Errore irreversibile C1055

limite del compilatore: chiavi insufficienti

Il file di origine contiene troppi simboli. Il compilatore ha esaurito le chiavi di hash per la tabella dei simboli.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Suddividere il file di origine in file più piccoli.

1. Eliminare i file di intestazione non necessari.

1. Riutilizzare le variabili globali e temporanee anziché crearne di nuovi.