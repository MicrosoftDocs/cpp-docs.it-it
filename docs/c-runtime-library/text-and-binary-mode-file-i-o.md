---
description: 'Altre informazioni su: I/O file modalità testo e binaria'
title: I/O file modalità testo e binaria
ms.date: 04/11/2018
helpviewer_keywords:
- files [C++], open functions
- I/O [CRT], text files
- functions [CRT], file access
- binary access, binary mode file I/O
- translation, modes
- I/O [CRT], binary
- text files, I/O
- I/O [CRT], translation modes
- translation modes (file I/O)
- binary access
ms.assetid: 3196e321-8b87-4609-b302-cd6f3c516051
ms.openlocfilehash: de4e7e7ea1792a23aac3507ec191f3433112b8dc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97326895"
---
# <a name="text-and-binary-mode-file-io"></a>I/O file modalità testo e binaria

Le operazioni di I/O dei file vengono eseguite in una delle due modalità di conversione, *testo* o *binario*, a seconda della modalità in cui il file è aperto. I file di dati in genere vengono elaborati in modalità testo. Per controllare la modalità di conversione del file, è possibile:

- Mantenere il valore predefinito corrente e specificare la modalità alternativa solo quando i file selezionati vengono aperti.

- Usare la funzione [_set_fmode](../c-runtime-library/reference/set-fmode.md) per modificare la modalità predefinita per i file aperti di recente. Usare [_get_fmode](../c-runtime-library/reference/get-fmode.md) per individuare la modalità predefinita corrente. L'impostazione predefinita iniziale è la modalità testo (**_O_TEXT**).

- Modificare la modalità di conversione predefinita direttamente impostando la variabile globale [_fmode](../c-runtime-library/fmode.md) nel programma. La funzione **_set_fmode** imposta il valore della variabile, che può anche essere impostata direttamente.

Quando si chiama una funzione di apertura file come [_open](../c-runtime-library/reference/open-wopen.md), [fopen](../c-runtime-library/reference/fopen-wfopen.md), [fopen_s](../c-runtime-library/reference/fopen-s-wfopen-s.md), [freopen](../c-runtime-library/reference/freopen-wfreopen.md), [freopen_s](../c-runtime-library/reference/freopen-s-wfreopen-s.md), [_fsopen](../c-runtime-library/reference/fsopen-wfsopen.md) o [_sopen_s](../c-runtime-library/reference/sopen-s-wsopen-s.md), è possibile eseguire l'override dell'impostazione predefinita corrente di **_fmode** specificando l'argomento appropriato per la funzione [_set_fmode](../c-runtime-library/reference/set-fmode.md). I flussi **stdin**, **stdout** e **stderr** vengono sempre aperti in modalità testo per impostazione predefinita; è anche possibile eseguire l'override di questa impostazione predefinita quando si apre uno di questi file. Usare [_setmode](../c-runtime-library/reference/setmode.md) per modificare la modalità di conversione tramite il descrittore del file dopo che il file è stato aperto.

## <a name="see-also"></a>Vedi anche

[Input e output](../c-runtime-library/input-and-output.md)<br/>
[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>
