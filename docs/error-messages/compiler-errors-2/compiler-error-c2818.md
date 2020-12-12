---
description: 'Altre informazioni su: errore del compilatore C2818'
title: Errore del compilatore C2818
ms.date: 11/04/2016
f1_keywords:
- C2818
helpviewer_keywords:
- C2818
ms.assetid: 715fc7c9-0c6d-452b-b7f5-1682cea5e907
ms.openlocfilehash: e258387af290a8070c1c66a56a7523b46482cf99
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97194787"
---
# <a name="compiler-error-c2818"></a>Errore del compilatore C2818

l'applicazione di ' operator->' di overload è ricorsiva tramite il tipo ' type '

Una ridefinizione dell'operatore di accesso ai membri della classe contiene un'istruzione ricorsiva **`return`** . Per ridefinire l' `->` operatore con la ricorsione, è necessario spostare la routine ricorsiva in una funzione separata chiamata dalla funzione operator override.
