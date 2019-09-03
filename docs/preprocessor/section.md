---
title: Pragma section
ms.date: 08/29/2019
f1_keywords:
- section_CPP
- vc-pragma.section
helpviewer_keywords:
- pragmas, section
- section pragma
ms.assetid: c67215e9-2c4a-4b0f-b691-2414d2e2d96f
ms.openlocfilehash: 47ae2ff2503317e937e2b3a497357afbd5522a64
ms.sourcegitcommit: 6e1c1822e7bcf3d2ef23eb8fac6465f88743facf
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/03/2019
ms.locfileid: "70216595"
---
# <a name="section-pragma"></a>Pragma section

Crea una sezione in un file obj.

## <a name="syntax"></a>Sintassi

> **sezione #pragma (** "*nome-sezione*" [ **,** *attributi* ] **)**

## <a name="remarks"></a>Note

I termini *Segment* e *Section* hanno lo stesso significato in questo articolo.

Una sezione, una volta definita, rimarrà valida per il resto della compilazione. Tuttavia, è necessario utilizzare [_ _ declspec (allocate)](../cpp/allocate.md)oppure non viene inserito alcun elemento nella sezione.

*Section-name* è un parametro obbligatorio che diventa il nome della sezione. Il nome non deve essere in conflitto con alcun nome di sezione standard. Vedere [/Section](../build/reference/section-specify-section-attributes.md) per un elenco di nomi che non è consigliabile usare durante la creazione di una sezione.

*Attributes* è un parametro facoltativo costituito da uno o più attributi delimitati da virgole da assegnare alla sezione. *Gli attributi* possibili sono:

|Attributo|Descrizione|
|-|-|
|**read**|Consente operazioni di lettura sui dati.|
|**write**|Consente operazioni di scrittura sui dati.|
|**execute**|Consente l'esecuzione di codice.|
|**shared**|Condivide la sezione tra tutti i processi che caricano l'immagine.|
|**NOPAGE**|Contrassegna la sezione come non paginabile. Utile per i driver di dispositivo Win32.|
|**nocache**|Contrassegna la sezione come non memorizzabile nella cache. Utile per i driver di dispositivo Win32.|
|**discard**|Contrassegna la sezione come annullabile. Utile per i driver di dispositivo Win32.|
|**remove**|Contrassegna la sezione come non residente in memoria. Solo per i driver di dispositivo virtuali (V*x*D).|

Se non si specifica alcun attributo, la sezione ha gli attributi di **lettura** e **scrittura** .

## <a name="example"></a>Esempio

In questo esempio, la prima sezione pragma identifica la sezione e i relativi attributi. Il valore `j` integer non viene inserito `mysec` in perché non è stato dichiarato `__declspec(allocate)`utilizzando. `j` Viene invece inserito nella sezione Data. L'Integer `i` viene immesso in `mysec` come risultato del relativo attributo della classe di archiviazione `__declspec(allocate)`.

```cpp
// pragma_section.cpp
#pragma section("mysec",read,write)
int j = 0;

__declspec(allocate("mysec"))
int i = 0;

int main(){}
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
