---
title: '&lt;ostream&gt; | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- <ostream>
- ostream/std::<ostream>
- std::<ostream>
dev_langs:
- C++
helpviewer_keywords:
- ostream header
ms.assetid: 90c3b6fb-57cd-4ae7-99b8-8512f24a67d2
caps.latest.revision: 20
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 620017d55c00ebca2be29bc855f9e77413941961
ms.sourcegitcommit: dd1a509526fa8bb18e97ab7bc7b91cbdb3ec7059
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/26/2018
---
# <a name="ltostreamgt"></a>&lt;ostream&gt;

Definisce la classe modello [basic_ostream](../standard-library/basic-ostream-class.md), che funge da mediatore per gli inserimenti di iostream. L'intestazione definisce anche diversi manipolatori correlati. Questa intestazione viene in genere inclusa automaticamente da altre intestazioni iostream. Raramente è necessario che sia inclusa direttamente dall'utente.

## <a name="syntax"></a>Sintassi

```cpp
#include <ostream>

```

### <a name="typedefs"></a>Definizioni typedef

|Nome del tipo|Descrizione|
|-|-|
|[ostream](../standard-library/ostream-typedefs.md#ostream)|Crea un tipo da `basic_ostream` specializzato su `char` e `char_traits` specializzato su `char`.|
|[wostream](../standard-library/ostream-typedefs.md#wostream)|Crea un tipo da `basic_ostream` specializzato su `wchar_t` e `char_traits` specializzato su `wchar_t`.|

### <a name="manipulators"></a>Manipolatori

|||
|-|-|
|[endl](../standard-library/ostream-functions.md#endl)|Termina una riga e scarica il buffer.|
|[ends](../standard-library/ostream-functions.md#ends)|Termina una stringa.|
|[flush](../standard-library/ostream-functions.md#flush)|Scarica il buffer.|
|[swap](../standard-library/ostream-functions.md#swap)|Scambia il valori del parametro oggetto `basic_ostream` a sinistra con quelli del parametro oggetto `basic_ostream` a destra.|

### <a name="operators"></a>Operatori

|Operatore|Descrizione|
|-|-|
|[operator<<](../standard-library/ostream-operators.md#op_lt_lt)|Scrive vari tipi nel flusso.|

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[basic_ostream](../standard-library/basic-ostream-class.md)|La classe modello descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer del flusso.|

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[Thread Safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
[Programmazione iostream](../standard-library/iostream-programming.md)<br/>
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)<br/>
