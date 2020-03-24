---
title: Decorazione dei nomi
ms.date: 04/22/2019
helpviewer_keywords:
- name decoration [C++]
- names [C++], decorated
- decorated names, calling conventions
ms.assetid: 8327a27b-bb4f-49f2-8218-b851b9d2a463
ms.openlocfilehash: cc00c971eac2a089ccec5bd9eab594bdf4e8348e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80173517"
---
# <a name="name-decoration"></a>Decorazione dei nomi

La decorazione dei nomi in genere fa riferimento alle convenzioni di denominazione di C++, ma può essere applicata anche a diversi casi di C. Per impostazione predefinita, C++ usa il nome della funzione, i parametri e il tipo restituito per creare un nome linker per la funzione. Si consideri la seguente dichiarazione di funzione:

`void CALLTYPE test(void);`

La seguente tabella mostra il nome linker per diverse convenzioni di chiamata.

|Convenzione di chiamata|`extern "C"` o `.c` file|`.cpp`, `.cxx` o `/TP`|
|------------------------|---------------------------|------------------------|
|Convenzione di denominazione C (`__cdecl`)|`_test`|`?test@@ZAXXZ`|
|Convenzione di denominazione rapida delle chiamate (`__fastcall`)|`@test@0`|`?test@@YIXXZ`|
|Convenzione di denominazione di chiamata standard (`__stdcall`)|`_test@0`|`?test@@YGXXZ`|
|Convenzione di denominazione della chiamata vettoriale (`__vectorcall`)|`test@@0`|`?test@@YQXXZ`|

Usare `extern "C"` per chiamare una funzione C da C++. `extern "C"` impone l'uso della convenzione di denominazione C per le funzioni C++ non di classe. Tenere presente le opzioni del compilatore **/TC** o **/TP**, che indicano al compilatore di ignorare l'estensione del nome file e compilare il file C++rispettivamente come C o. Queste opzioni possono causare nomi di linker non previsti.

Questo errore può essere causato anche da prototipi di funzione con parametri non corrispondenti. La decorazione dei nomi incorpora i parametri di una funzione nel nome funzionale decorato finale. La chiamata di una funzione con i tipi di parametro che non corrispondono a quelli nella dichiarazione di funzione può anche causare LNK2001.

Attualmente non sono disponibili standard per C++ la denominazione tra i fornitori di compilatori o anche tra versioni diverse di un compilatore. Il collegamento di file oggetto compilati da altri compilatori non può produrre lo stesso schema di denominazione e può causare esterni non risolti.

## <a name="see-also"></a>Vedere anche

[Errore degli strumenti del linker LNK2001](../../error-messages/tool-errors/linker-tools-error-lnk2001.md)
