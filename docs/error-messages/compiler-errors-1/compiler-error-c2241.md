---
title: Errore del compilatore C2241
ms.date: 11/04/2016
f1_keywords:
- C2241
helpviewer_keywords:
- C2241
ms.assetid: 2f4e2c2c-b95c-4afe-bbe0-4214cd39d140
ms.openlocfilehash: 88f25931d84fe3884ebecbc97b9ddd73390bacc2
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50618878"
---
# <a name="compiler-error-c2241"></a>Errore del compilatore C2241

'identifier': restrizioni sull'accesso ai membri

Il codice tenta di accedere a un membro privato o protetto.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Cambiare il livello di accesso del membro.

1. Dichiarare il membro come `friend` della funzione di accesso.