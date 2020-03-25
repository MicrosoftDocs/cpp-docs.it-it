---
title: Errore del compilatore C2818
ms.date: 11/04/2016
f1_keywords:
- C2818
helpviewer_keywords:
- C2818
ms.assetid: 715fc7c9-0c6d-452b-b7f5-1682cea5e907
ms.openlocfilehash: 00952e55f1b732bd9af3733f5c0ec575a39116fe
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80202111"
---
# <a name="compiler-error-c2818"></a>Errore del compilatore C2818

l'applicazione di ' operator->' di overload è ricorsiva tramite il tipo ' type '

Una ridefinizione dell'operatore di accesso ai membri della classe contiene un'istruzione `return` ricorsiva. Per ridefinire l'operatore `->` con la ricorsione, è necessario spostare la routine ricorsiva in una funzione separata chiamata dalla funzione operator override.
