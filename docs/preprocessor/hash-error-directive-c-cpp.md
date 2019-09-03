---
title: '#Direttiva error (C/C++)'
ms.date: 08/29/2019
f1_keywords:
- '#error'
helpviewer_keywords:
- '#error directive'
- preprocessor, directives
- error directive (#error directive)
ms.assetid: d550a802-ff19-4347-9597-688935d23b2b
ms.openlocfilehash: bfb5c18f20319e6e6d345f28d3e1850714334b71
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70216116"
---
# <a name="error-directive-cc"></a>direttiva #error (C/C++)

La direttiva **#error** genera un messaggio di errore specificato dall'utente in fase di compilazione e quindi termina la compilazione.

## <a name="syntax"></a>Sintassi

> **#error** *stringa di token*

## <a name="remarks"></a>Note

Il messaggio di errore emesso da questa direttiva include il parametro della *stringa di token* . Il parametro della *stringa di token* non è soggetto all'espansione della macro. Questa direttiva è particolarmente utile durante la pre-elaborazione, per notificare allo sviluppatore l'incoerenza di un programma o la violazione di un vincolo. Nell'esempio seguente viene illustrata l'elaborazione di errore durante la fase di pre-elaborazione:

```cpp
#if !defined(__cplusplus)
#error C++ compiler required.
#endif
```

## <a name="see-also"></a>Vedere anche

[Direttive per il preprocessore](../preprocessor/preprocessor-directives.md)
