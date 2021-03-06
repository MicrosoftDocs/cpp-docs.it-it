---
description: 'Altre informazioni su: supporto COM del compilatore'
title: Supporto COM del compilatore
ms.date: 05/06/2019
helpviewer_keywords:
- cl.exe compiler, COM support
- COM, compiler support
ms.assetid: 76a78442-f2a4-4985-9967-67e20773f847
ms.openlocfilehash: 1dd64d34b39a2b5cd2f0648d38deddf51e8541a3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97120464"
---
# <a name="compiler-com-support"></a>Supporto COM del compilatore

**Specifico di Microsoft**

Il compilatore Microsoft C++ può leggere direttamente le librerie dei tipi COM (Component Object Model) e traslare il contenuto nel codice sorgente C++ che può essere incluso nella compilazione. Le estensioni del linguaggio sono disponibili per semplificare la programmazione COM sul lato client per le applicazioni desktop.

Utilizzando la direttiva per il [preprocessore #import](../preprocessor/hash-import-directive-cpp.md), il compilatore è in grado di leggere una libreria dei tipi e di convertirla in un file di intestazione C++ che descrive le interfacce com come classi. È disponibile un set di attributi `#import` per il controllo utente del contenuto dei file di intestazione delle librerie dei tipi risultanti.

È possibile usare l' [](../cpp/declspec.md) attributo esteso __declspec [UUID](../cpp/uuid-cpp.md) per assegnare un identificatore univoco globale (Guid) a un oggetto com. È possibile utilizzare la parola chiave [__uuidof](../cpp/uuidof-operator.md) per estrarre il GUID associato a un oggetto com. Un altro **`__declspec`** attributo, [Property](../cpp/property-cpp.md), può essere usato per specificare `get` i `set` metodi e per un membro dati di un oggetto com.

Viene fornito un set di classi e funzioni globali del supporto COM per supportare `VARIANT` i `BSTR` tipi e, implementare i puntatori intelligenti e incapsulare l'oggetto Error generato da `_com_raise_error` :

- [Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)

- [_bstr_t](../cpp/bstr-t-class.md)

- [_com_error](../cpp/com-error-class.md)

- [_com_ptr_t](../cpp/com-ptr-t-class.md)

- [_variant_t](../cpp/variant-t-class.md)

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classi di supporto COM del compilatore](../cpp/compiler-com-support-classes.md)<br/>
[Funzioni globali COM del compilatore](../cpp/compiler-com-global-functions.md)
