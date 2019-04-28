---
title: section
ms.date: 11/04/2016
f1_keywords:
- section_CPP
- vc-pragma.section
helpviewer_keywords:
- pragmas, section
- section pragma
ms.assetid: c67215e9-2c4a-4b0f-b691-2414d2e2d96f
ms.openlocfilehash: 41479d7d8767438d0e59fbe6beb7e435459dcb1b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62179633"
---
# <a name="section"></a>section

Crea una sezione in un file obj.

## <a name="syntax"></a>Sintassi

```
#pragma section( "section-name" [, attributes] )
```

## <a name="remarks"></a>Note

Il significato dei termini *segmento* e *sezione* sono intercambiabili in questo argomento.

Una sezione, una volta definita, rimarrà valida per il resto della compilazione. Tuttavia, è necessario utilizzare [declspec](../cpp/allocate.md) o non verrà inserito nella sezione.

*nome della sezione* è un parametro obbligatorio che sarà il nome della sezione. Il nome non deve essere in conflitto con alcun nome di sezione standard. Visualizzare [/Section](../build/reference/section-specify-section-attributes.md) per un elenco dei nomi non è consigliabile usare durante la creazione di una sezione.

*gli attributi* è un parametro facoltativo costituito da uno o più attributi di delimitato da virgole che si desidera assegnare alla sezione. Possibili *attributi* sono:

|Attributo|Descrizione|
|-|-|
|**read**|Consente operazioni di lettura sui dati.|
|**write**|Consente operazioni di scrittura sui dati.|
|**execute**|Consente l'esecuzione di codice.|
|**shared**|Condivide la sezione tra tutti i processi che caricano l'immagine.|
|**nopage**|Contrassegna la sezione come non paginabile; utile per i driver di dispositivo Win32.|
|**nocache**|Contrassegna la sezione come non memorizzabile nella cache; utile per i driver di dispositivo Win32.|
|**discard**|Contrassegna la sezione come annullabile; utile per i driver di dispositivo Win32.|
|**remove**|Contrassegna la sezione come non residente in memoria; driver di dispositivo virtuali (V*x*1!d) solo.|

Se non si specificano attributi, la sezione avrà attributi di lettura e scrittura.

## <a name="example"></a>Esempio

Nell'esempio seguente, la prima istruzione identifica la sezione e i relativi attributi. L'Integer `j` non viene inserito in `mysec` poiché non è stato dichiarato con `__declspec(allocate)`; `j` viene immesso nella sezione di dati. L'Integer `i` viene immesso in `mysec` come risultato del relativo attributo della classe di archiviazione `__declspec(allocate)`.

```cpp
// pragma_section.cpp
#pragma section("mysec",read,write)
int j = 0;

__declspec(allocate("mysec"))
int i = 0;

int main(){}
```

## <a name="see-also"></a>Vedere anche

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)