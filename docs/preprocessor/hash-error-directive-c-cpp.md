---
description: 'Altre informazioni su: direttiva #error (C/C++)'
title: '#Direttiva error (C/C++)'
ms.date: 08/29/2019
f1_keywords:
- '#error'
helpviewer_keywords:
- '#error directive'
- preprocessor, directives
- error directive (#error directive)
ms.assetid: d550a802-ff19-4347-9597-688935d23b2b
ms.openlocfilehash: fd6503de9590893ee0ec53cbbfa59429a0cfdcfe
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97261151"
---
# <a name="error-directive-cc"></a>direttiva #error (C/C++)

La direttiva **#error** genera un messaggio di errore specificato dall'utente in fase di compilazione e quindi termina la compilazione.

## <a name="syntax"></a>Sintassi

>  *stringa di token* #error

## <a name="remarks"></a>Commenti

Il messaggio di errore emesso da questa direttiva include il parametro della *stringa di token* . Il parametro della *stringa di token* non è soggetto all'espansione della macro. Questa direttiva è particolarmente utile durante la pre-elaborazione, per notificare allo sviluppatore l'incoerenza di un programma o la violazione di un vincolo. Nell'esempio seguente viene illustrata l'elaborazione di errore durante la fase di pre-elaborazione:

```cpp
#if !defined(__cplusplus)
#error C++ compiler required.
#endif
```

## <a name="see-also"></a>Vedi anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)
