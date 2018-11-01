---
title: '#Errore (direttiva) (C/C++)'
ms.date: 11/04/2016
f1_keywords:
- '#error'
helpviewer_keywords:
- '#error directive'
- preprocessor, directives
- error directive (#error directive)
ms.assetid: d550a802-ff19-4347-9597-688935d23b2b
ms.openlocfilehash: c83fc7ef8135ee0cba37a956df47bcab0f796007
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50447814"
---
# <a name="error-directive-cc"></a>Direttiva #error (C/C++)
Il **#error** direttiva genera un messaggio di errore specificato dall'utente in fase di compilazione e quindi termina la compilazione.

## <a name="syntax"></a>Sintassi

```
#errortoken-string
```

## <a name="remarks"></a>Note

Il messaggio di errore che la direttiva genera include il *token-string* parametro. Il *token-string* parametro non è soggetto all'espansione di macro. Questa direttiva è molto utile durante la fase di pre-elaborazione per comunicare allo sviluppatore un'incoerenza di programma o la violazione di un vincolo. Nell'esempio seguente viene illustrata l'elaborazione di errore durante la fase di pre-elaborazione:

```
#if !defined(__cplusplus)
#error C++ compiler required.
#endif
```

## <a name="see-also"></a>Vedere anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)