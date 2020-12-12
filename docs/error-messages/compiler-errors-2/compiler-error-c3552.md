---
description: 'Altre informazioni su: errore del compilatore C3552'
title: Errore del compilatore C3552
ms.date: 11/04/2016
f1_keywords:
- C3552
helpviewer_keywords:
- C3552
ms.assetid: 83401524-1bf1-44c0-8aca-a6eb35c4224c
ms.openlocfilehash: aca1474f53c8ac1a8257b23d0042550b76b3c0e8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97223256"
---
# <a name="compiler-error-c3552"></a>Errore del compilatore C3552

'typename': un tipo restituito specificato in ritardo non può contenere 'auto'

Se si utilizza la **`auto`** parola chiave come segnaposto per il tipo restituito di una funzione, è necessario fornire un tipo restituito specificato in ritardo. Tuttavia, non è possibile usare un'altra **`auto`** parola chiave per specificare il tipo restituito specificato in ritardo. Ad esempio, il frammento di codice seguente genera l'errore C3552.

`auto myFunction->auto; // C3552`
