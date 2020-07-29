---
title: Abilitazione di risorse internazionali
ms.date: 11/04/2016
helpviewer_keywords:
- globalization [C++], character sets
- strings [C++], international enabling
- localization [C++], character sets
- MBCS [C++], enabling
- Unicode [C++], enabling
ms.assetid: b077f4ca-5865-40ef-a46e-d9e4d686ef21
ms.openlocfilehash: ff0fb4102a0453b900b5b406739492a9420a5b07
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87228089"
---
# <a name="international-enabling"></a>Abilitazione di risorse internazionali

La maggior parte del codice C e C++ tradizionale si basa sui presupposti relativi alla manipolazione di caratteri e stringhe che non funzionano correttamente per le applicazioni internazionali. Anche se MFC e la libreria di runtime supportano Unicode o MBCS, è ancora necessario eseguire questa operazione. In questa sezione viene illustrato il significato di "Abilitazione internazionale" in Visual C++:

- Sia Unicode che MBCS sono abilitati per mezzo di tipi di dati portabili negli elenchi di parametri di funzione MFC e nei tipi restituiti. Questi tipi sono definiti in modo condizionale nei modi appropriati, a seconda che la compilazione definisca il simbolo `_UNICODE` o il simbolo `_MBCS` (ovvero DBCS). Diverse varianti delle librerie MFC vengono collegate automaticamente all'applicazione, a seconda dei due simboli definiti dalla compilazione.

- Il codice della libreria di classi utilizza funzioni di run-time portabili e altri mezzi per garantire il comportamento corretto di Unicode o MBCS.

- È comunque necessario gestire alcuni tipi di attività di internazionalizzazione nel codice:

  - Utilizzare le stesse funzioni di runtime portabili che rendono portabile MFC in uno dei due ambienti.

  - Rendere le stringhe letterali e i caratteri portabili in uno dei due ambienti, usando la `_T` macro. Per ulteriori informazioni, vedere [mapping di testo generico in TCHAR. h](../text/generic-text-mappings-in-tchar-h.md).

  - Prendere le precauzioni durante l'analisi delle stringhe in MBCS. Queste precauzioni non sono necessarie in Unicode. Per ulteriori informazioni, vedere [Suggerimenti per la programmazione MBCS](../text/mbcs-programming-tips.md).

  - Prestare attenzione se si combinano caratteri ANSI (8 bit) e Unicode (a 16 bit) nell'applicazione. È possibile usare i caratteri ANSI in alcune parti del programma e i caratteri Unicode in altri, ma non è possibile combinarli nella stessa stringa.

  - Non impostare come hardcoded le stringhe nell'applicazione. Al contrario, è necessario un'STRINGTABLE le risorse aggiungendole al file RC dell'applicazione. L'applicazione può quindi essere localizzata senza richiedere modifiche al codice sorgente o ricompilazione. Per altre informazioni sulle risorse di un'STRINGTABLE, vedere [editor di stringhe](../windows/string-editor.md).

> [!NOTE]
> I set di caratteri europei e MBCS hanno alcuni caratteri, ad esempio lettere accentate, con codici di caratteri maggiori di 0x80. Poiché la maggior parte del codice usa caratteri firmati, questi caratteri superiori a 0x80 vengono estesi con segno quando vengono convertiti in **`int`** . Si tratta di un problema per l'indicizzazione delle matrici perché i caratteri estesi del segno, che sono negativi, indici al di fuori della matrice. Sono inoltre univoche le lingue che utilizzano MBCS, ad esempio il giapponese. Poiché un carattere può essere costituito da 1 o 2 byte, è sempre necessario modificare entrambi i byte nello stesso momento.

## <a name="see-also"></a>Vedere anche

[Unicode e MBCS](../text/unicode-and-mbcs.md)<br/>
[Strategie di internazionalizzazione](../text/internationalization-strategies.md)
