---
title: Errore del compilatore C3552
ms.date: 11/04/2016
f1_keywords:
- C3552
helpviewer_keywords:
- C3552
ms.assetid: 83401524-1bf1-44c0-8aca-a6eb35c4224c
ms.openlocfilehash: 567c92ddabbe2517700e4c67ef2c1ba899baada8
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80200668"
---
# <a name="compiler-error-c3552"></a>Errore del compilatore C3552

'typename': un tipo restituito specificato in ritardo non può contenere 'auto'

Se si usa la parola chiave `auto` come segnaposto per il tipo restituito di una funzione, è necessario fornire un tipo restituito specificato in ritardo. Tuttavia, non è possibile usare un'altra parola chiave `auto` per specificare il tipo restituito specificato in ritardo. Ad esempio, il frammento di codice seguente genera l'errore C3552.

`auto myFunction->auto; // C3552`
