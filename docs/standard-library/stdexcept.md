---
description: 'Altre informazioni su: &lt; STDEXCEPT&gt;'
title: '&lt;stdexcept&gt;'
ms.date: 11/04/2016
f1_keywords:
- <stdexcept>
helpviewer_keywords:
- stdexcept header
ms.assetid: 495c10b1-1e60-4514-9f8f-7fda11a2f522
ms.openlocfilehash: 07ab90442630c6dfb5a96604ba7c0cb6b214f605
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97169086"
---
# <a name="ltstdexceptgt"></a>&lt;stdexcept&gt;

Definisce diverse classi standard usate per le eccezioni della creazione di rapporti. Le classi formano una gerarchia di derivazione interamente derivata dall'[eccezione](../standard-library/exception-class.md) della classe e includono due tipi generali di eccezioni: errori logici e errori di runtime. Gli errori logici sono causati da errori del programmatore. Derivano da logic_error della classe di base e includono:

- `domain_error`

- `invalid_argument`

- `length_error`

- `out_of_range`

Gli errori di runtime si verificano a causa di errori nelle funzioni della libreria o nel sistema di runtime. Derivano da runtime_error della classe di base e includono:

- `overflow_error`

- `range_error`

- `underflow_error`

### <a name="classes"></a>Classi

|Classe|Descrizione|
|-|-|
|[Classe domain_error](../standard-library/domain-error-class.md)|La classe funge da classe di base per tutte le eccezioni generate per segnalare un errore del dominio.|
|[Classe invalid_argument](../standard-library/invalid-argument-class.md)|La classe funge da classe di base per tutte le eccezioni generate per segnalare un argomento non valido.|
|[Classe length_error](../standard-library/length-error-class.md)|La classe funge da classe di base per tutte le eccezioni generate per segnalare un tentativo di generare un oggetto troppo lungo da specificare.|
|[Classe logic_error](../standard-library/logic-error-class.md)|La classe funge da classe da classe di base per tutte le eccezioni generate per segnalare errori presumibilmente rilevabili prima di eseguire il programma, ad esempio violazioni precondizioni logiche.|
|[Classe out_of_range](../standard-library/out-of-range-class.md)|La classe funge da classe di base per tutte le eccezioni generate per segnalare un argomento che è esterno all'intervallo valido.|
|[Classe overflow_error](../standard-library/overflow-error-class.md)|La classe funge da classe di base per tutte le eccezioni generate per segnalare un overflow aritmetico.|
|[Classe range_error](../standard-library/range-error-class.md)|La classe funge da classe di base per tutte le eccezioni generate per segnalare un errore di intervallo.|
|[Classe runtime_error](../standard-library/runtime-error-class.md)|La classe funge da classe di base per tutte le eccezioni generate per segnalare errori presumibilmente rilevabili solo quando il programma viene eseguito.|
|[Classe underflow_error](../standard-library/underflow-error-class.md)|La classe funge da classe di base per tutte le eccezioni generate per segnalare un underflow aritmetico.|

## <a name="see-also"></a>Vedi anche

[Guida di riferimento ai file di intestazione](../standard-library/cpp-standard-library-header-files.md)\
[Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)
