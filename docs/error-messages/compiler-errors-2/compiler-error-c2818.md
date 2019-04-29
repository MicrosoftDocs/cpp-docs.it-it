---
title: Errore del compilatore C2818
ms.date: 11/04/2016
f1_keywords:
- C2818
helpviewer_keywords:
- C2818
ms.assetid: 715fc7c9-0c6d-452b-b7f5-1682cea5e907
ms.openlocfilehash: f6e33d0e0ee139138df7d8e11357100b3ec3a1a9
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62388696"
---
# <a name="compiler-error-c2818"></a>Errore del compilatore C2818

applicazione di 'operator ->' di overload è ricorsiva tramite il tipo 'type'

Una ridefinizione dell'operatore di accesso di membro di classe contiene una ricorsiva `return` istruzione. Per ridefinire il `->` operatore con ricorsione, è necessario spostare la routine ricorsive in una funzione separata denominata dall'operatore di eseguire l'override (funzione).