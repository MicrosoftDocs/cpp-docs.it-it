---
description: 'Altre informazioni su: specifica del percorso'
title: Specifica del nome del percorso
ms.date: 11/04/2016
helpviewer_keywords:
- names [C++], compiler output files
- cl.exe compiler, output files
- output files, specifying pathnames
ms.assetid: 7a6595ce-3383-44ae-957a-466bfa29c343
ms.openlocfilehash: a8c55822bcb19864955ffa37ef2dd4cb18765ae5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97224530"
---
# <a name="specifying-the-pathname"></a>Specifica del nome del percorso

Ogni opzione del file di output accetta un argomento *pathname* che può specificare un percorso e un nome per il file di output. L'argomento può includere un nome di unità, una directory e un nome file. Non è consentito alcuno spazio tra l'opzione e l'argomento.

Se *pathname* include un nome file senza estensione, il compilatore fornisce all'output un'estensione predefinita. Se *pathname* include una directory ma nessun nome file, il compilatore crea un file con un nome predefinito nella directory specificata. Il nome predefinito è basato sul nome di base del file di origine e su un'estensione predefinita in base al tipo del file di output. Se si lascia completamente il *percorso* , il compilatore crea un file con un nome predefinito in una directory predefinita.

In alternativa, l'argomento *pathname* può essere un nome di dispositivo (AUX, con, PRN o NUL) invece di un nome file. Non usare uno spazio tra l'opzione e il nome del dispositivo o i due punti come parte del nome del dispositivo.

|Nome del dispositivo|Rappresenta|
|-----------------|----------------|
|AUX|Dispositivo ausiliario|
|CON|Console|
|PRN|Stampante|
|NUL|Dispositivo null (nessun file creato)|

## <a name="example"></a>Esempio

La riga di comando seguente invia un file map alla stampante:

```
CL /FmPRN HELLO.CPP
```

## <a name="see-also"></a>Vedi anche

[Opzioni del file di output (/F)](output-file-f-options.md)<br/>
[Opzioni del compilatore MSVC](compiler-options.md)<br/>
[Sintassi Command-Line del compilatore MSVC](compiler-command-line-syntax.md)
