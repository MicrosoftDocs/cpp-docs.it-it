---
description: 'Altre informazioni su: libreria'
title: LIBRARY
ms.date: 11/04/2016
f1_keywords:
- LIBRARY
helpviewer_keywords:
- LIBRARY .def file statement
ms.assetid: 1d7ccc92-e088-4ef7-9ef0-25c3862cc051
ms.openlocfilehash: 3d8c63f323568949cf2fb30935d2557755346422
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97199532"
---
# <a name="library"></a>LIBRARY

Indica al collegamento di creare una DLL. Allo stesso tempo, collegamento crea una libreria di importazione, a meno che non venga usato un file exp nella compilazione.

```
LIBRARY [library][BASE=address]
```

## <a name="remarks"></a>Commenti

L'argomento *Library* specifica il nome della dll. È anche possibile usare l'opzione [/out](out-output-file-name.md) del linker per specificare il nome di output della dll.

L'argomento BASE =*Address* imposta l'indirizzo di base utilizzato dal sistema operativo per caricare la dll. Questo argomento sostituisce il percorso predefinito della DLL di 0x10000000. Per informazioni dettagliate sugli indirizzi di base, vedere la descrizione dell'opzione [/base](base-base-address.md) .

Ricordarsi di usare l'opzione del linker [/dll](dll-build-a-dll.md) quando si compila una dll.

## <a name="see-also"></a>Vedi anche

[Regole per Module-Definition istruzioni](rules-for-module-definition-statements.md)
