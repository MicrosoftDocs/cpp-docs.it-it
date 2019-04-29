---
title: Errore del compilatore C2241
ms.date: 11/04/2016
f1_keywords:
- C2241
helpviewer_keywords:
- C2241
ms.assetid: 2f4e2c2c-b95c-4afe-bbe0-4214cd39d140
ms.openlocfilehash: 88f25931d84fe3884ebecbc97b9ddd73390bacc2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62388969"
---
# <a name="compiler-error-c2241"></a>Errore del compilatore C2241

'identifier': restrizioni sull'accesso ai membri

Il codice tenta di accedere a un membro privato o protetto.

### <a name="to-fix-by-using-the-following-possible-solutions"></a>Per correggere il problema, provare le seguenti soluzioni possibili

1. Cambiare il livello di accesso del membro.

1. Dichiarare il membro come `friend` della funzione di accesso.