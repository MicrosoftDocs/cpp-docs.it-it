---
title: '&lt;strstream&gt;'
ms.date: 11/04/2016
f1_keywords:
- <strstream>
helpviewer_keywords:
- strstream header
ms.assetid: eaa9d0d4-d217-4f28-8a68-9b9ad7b1c0f5
ms.openlocfilehash: ecf8499a07f03c00588e7b7fd83b8d41a23e8e7a
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68459095"
---
# <a name="ltstrstreamgt"></a>&lt;strstream&gt;

Definisce diverse classi che supportano operazioni iostreams su sequenze archiviate in una matrice allocata di oggetti **char** . Queste sequenze vengono facilmente convertite in e da stringhe C.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<strstream>

**Spazio dei nomi:** std

## <a name="remarks"></a>Note

Gli oggetti di tipo `strstream` funzionano con `char` *, che sono stringhe C. Usare [\<sstream>](../standard-library/sstream.md) per utilizzare oggetti di tipo [basic_string](../standard-library/basic-string-class.md).

> [!NOTE]
> Le classi in \<strstream > sono deprecate. Provare a usare le classi \<in sstream >.

## <a name="members"></a>Members

### <a name="classes"></a>Classi

|||
|-|-|
|[Classe strstreambuf](../standard-library/strstreambuf-class.md)|La classe descrive un buffer del flusso che controlla la trasmissione di elementi da e verso una sequenza di elementi archiviati in un oggetto matrice di **caratteri** .|
|[Classe istrstream](../standard-library/istrstream-class.md)|La classe descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).|
|[Classe ostrstream](../standard-library/ostrstream-class.md)|La classe descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).|
|[Classe strstream](../standard-library/strstream-class.md)|La classe descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati usando un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).|

### <a name="functions"></a>Funzioni

```cpp
void freeze(bool freezefl = true);
char* str();
int pcount();
```

## <a name="see-also"></a>Vedere anche

[\<strstream>](../standard-library/strstream.md)\
[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)\ (Sicurezza dei thread nella libreria standard C++)
[Programmazione di iostream](../standard-library/iostream-programming.md)\
[Convenzioni di iostream](../standard-library/iostreams-conventions.md)
