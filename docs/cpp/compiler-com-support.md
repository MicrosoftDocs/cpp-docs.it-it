---
title: Supporto COM del compilatore
ms.date: 05/06/2019
helpviewer_keywords:
- cl.exe compiler, COM support
- COM, compiler support
ms.assetid: 76a78442-f2a4-4985-9967-67e20773f847
ms.openlocfilehash: e13874bad44610821bed9c588af6bd9124162116
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65222215"
---
# <a name="compiler-com-support"></a>Supporto COM del compilatore

## <a name="microsoft-specific"></a>Sezione specifica Microsoft

Microsoft C++ compilatore direttamente può leggere librerie dei tipi di componente oggetto del modello (COM) e convertire il contenuto in C++ codice sorgente che può essere incluso nella compilazione. Sono disponibili estensioni del linguaggio per semplificare la programmazione COM sul lato client.

Tramite il [direttiva del preprocessore #import](../preprocessor/hash-import-directive-cpp.md), il compilatore può leggere una libreria dei tipi e convertire i dati in un file di intestazione C++ che descrive il modello COM interfacce come classi. È disponibile un set di attributi `#import` per il controllo utente del contenuto dei file di intestazione delle librerie dei tipi risultanti.

È possibile usare la [declspec](../cpp/declspec.md) attributo esteso [uuid](../cpp/uuid-cpp.md) per assegnare un identificatore univoco globale (GUID) a un oggetto COM. La parola chiave [uuidof](../cpp/uuidof-operator.md) può essere utilizzato per estrarre il GUID associato a un oggetto COM. Un'altra **declspec** attributo [proprietà](../cpp/property-cpp.md), può essere utilizzato per specificare la `get` e `set` metodi per un membro dati di un oggetto COM.

Viene fornito un set di classi e funzioni globali di supporto COM per supportare le `VARIANT` e `BSTR` tipi, implementare i puntatori intelligenti e incapsulare l'oggetto errore generato da `_com_raise_error`:

- [Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)

- [_bstr_t](../cpp/bstr-t-class.md)

- [_com_error](../cpp/com-error-class.md)

- [_com_ptr_t](../cpp/com-ptr-t-class.md)

- [_variant_t](../cpp/variant-t-class.md)

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)<br/>
[Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)