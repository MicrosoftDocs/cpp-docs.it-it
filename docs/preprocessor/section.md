---
description: 'Altre informazioni su: Section pragma'
title: Pragma section
ms.date: 08/29/2019
f1_keywords:
- section_CPP
- vc-pragma.section
helpviewer_keywords:
- pragmas, section
- section pragma
ms.assetid: c67215e9-2c4a-4b0f-b691-2414d2e2d96f
ms.openlocfilehash: f4a719c60fd5bdf4f8e8841aab88f82c30b92a95
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342283"
---
# <a name="section-pragma"></a>Pragma section

Crea una sezione in un file obj.

## <a name="syntax"></a>Sintassi

> **sezione #pragma (** "*nome-sezione*" [ **,** *attributi* ] **)**

## <a name="remarks"></a>Commenti

I termini *Segment* e *Section* hanno lo stesso significato in questo articolo.

Una sezione, una volta definita, rimarrà valida per il resto della compilazione. Tuttavia, è necessario usare [__declspec (allocate)](../cpp/allocate.md)o nessun elemento viene inserito nella sezione.

*Section-name* è un parametro obbligatorio che diventa il nome della sezione. Il nome non deve essere in conflitto con alcun nome di sezione standard. Vedere [/Section](../build/reference/section-specify-section-attributes.md) per un elenco di nomi che non è consigliabile usare durante la creazione di una sezione.

*Attributes* è un parametro facoltativo costituito da uno o più attributi delimitati da virgole da assegnare alla sezione. *Gli attributi* possibili sono:

|Attributo|Descrizione|
|-|-|
|**lettura**|Consente operazioni di lettura sui dati.|
|**scrittura**|Consente operazioni di scrittura sui dati.|
|**execute**|Consente l'esecuzione di codice.|
|**condiviso**|Condivide la sezione tra tutti i processi che caricano l'immagine.|
|**nopage**|Contrassegna la sezione come non paginabile. Utile per i driver di dispositivo Win32.|
|**NoCache**|Contrassegna la sezione come non memorizzabile nella cache. Utile per i driver di dispositivo Win32.|
|**rimuovere**|Contrassegna la sezione come annullabile. Utile per i driver di dispositivo Win32.|
|**remove**|Contrassegna la sezione come non residente in memoria. Solo per i driver di dispositivo virtuali (V *x* D).|

Se non si specifica alcun attributo, la sezione ha gli attributi di **lettura** e **scrittura** .

## <a name="example"></a>Esempio

In questo esempio, la prima sezione pragma identifica la sezione e i relativi attributi. Il valore integer `j` non viene inserito in perché non è `mysec` stato dichiarato utilizzando `__declspec(allocate)` . Viene invece `j` inserito nella sezione Data. L'Integer `i` viene immesso in `mysec` come risultato del relativo attributo della classe di archiviazione `__declspec(allocate)`.

```cpp
// pragma_section.cpp
#pragma section("mysec",read,write)
int j = 0;

__declspec(allocate("mysec"))
int i = 0;

int main(){}
```

## <a name="see-also"></a>Vedi anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
