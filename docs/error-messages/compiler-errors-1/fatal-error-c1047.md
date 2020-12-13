---
description: "Altre informazioni su: errore irreversibile l'errore C1047"
title: Errore irreversibile C1047
ms.date: 11/04/2016
f1_keywords:
- C1047
helpviewer_keywords:
- C1047
ms.assetid: e1bbbc6b-a5bc-4c23-8203-488120a0ec78
ms.openlocfilehash: e3aa85fb777850ce6ee754ee89b9e351b5eba975
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97341191"
---
# <a name="fatal-error-c1047"></a>Errore irreversibile C1047

L'oggetto o il file di libreria 'file' è stato creato con un compilatore precedente rispetto a quello utilizzato per altri oggetti. Ricompilare i vecchi oggetti e librerie

L'errore C1047 si verifica quando si collegano tra loro librerie o file oggetto compilati con **/LTCG** , ma mediante versioni diverse del set di strumenti di Visual C++.

Ciò può verificarsi quando si inizia a usare una nuova versione del compilatore senza eseguire una ricompilazione pulita dei file oggetto o delle librerie esistenti.

Per correggere l'errore C1047, ricompilare tutti i file oggetto o le librerie.
