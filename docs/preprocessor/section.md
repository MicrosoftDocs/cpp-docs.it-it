---
description: Altre informazioni sulla direttiva section pragma in Microsoft C/C++
title: sezione pragma
ms.date: 01/22/2021
f1_keywords:
- section_CPP
- vc-pragma.section
helpviewer_keywords:
- pragma, section
- section pragma
no-loc:
- pragma
ms.openlocfilehash: 8bd55bbba65480b7345376059489d8aef945ab34
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713233"
---
# <a name="section-no-locpragma"></a>`section` pragma

Crea una sezione in un file OBJ.

## <a name="syntax"></a>Sintassi

> **`#pragma section( "`***nome sezione* **`"`** [ **`,`** *attributi* ]**`)`**

## <a name="remarks"></a>Osservazioni

I termini *Segment* e *Section* hanno lo stesso significato in questo articolo.

Una volta definita, una sezione rimane valida per il resto della compilazione. Tuttavia, è necessario usare [`__declspec(allocate)`](../cpp/allocate.md) o non viene inserito alcun elemento nella sezione.

*Section-name* è un parametro obbligatorio che diventa il nome della sezione. Il nome non deve essere in conflitto con alcun nome di sezione standard. [`/SECTION`](../build/reference/section-specify-section-attributes.md)Per un elenco dei nomi da usare durante la creazione di una sezione, vedere.

*Attributes* è un parametro facoltativo costituito da uno o più attributi delimitati da virgole da assegnare alla sezione. *Gli attributi* possibili sono:

| Attributo | Descrizione |
|--|--|
| **`read`** | Consente operazioni di lettura sui dati. |
| **`write`** | Consente operazioni di scrittura sui dati. |
| **`execute`** | Consente l'esecuzione di codice. |
| **`shared`** | Condivide la sezione tra tutti i processi che caricano l'immagine. |
| **`nopage`** | Contrassegna la sezione come non paginabile. Utile per i driver di dispositivo Win32. |
| **`nocache`** | Contrassegna la sezione come non memorizzabile nella cache. Utile per i driver di dispositivo Win32. |
| **`discard`** | Contrassegna la sezione come annullabile. Utile per i driver di dispositivo Win32. |
| **`remove`** | Contrassegna la sezione come non residente in memoria. Solo per i driver di dispositivo virtuali (V *x* D). |

Se non si specifica alcun attributo, la sezione include **`read`** **`write`** gli attributi e.

## <a name="example"></a>Esempio

In questo esempio, la prima sezione pragma identifica la sezione e i relativi attributi. Il valore integer `j` non viene inserito in `mysec` perché non è stato dichiarato utilizzando `__declspec(allocate)` . Viene invece `j` inserito nella sezione Data. Il numero intero `i` passa a a `mysec` causa del relativo `__declspec(allocate)` attributo della classe di archiviazione.

```cpp
// pragma_section.cpp
#pragma section("mysec",read,write)
int j = 0;

__declspec(allocate("mysec"))
int i = 0;

int main(){}
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)
