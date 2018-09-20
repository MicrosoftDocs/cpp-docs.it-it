---
title: code_seg | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- code_seg_CPP
- vc-pragma.code_seg
dev_langs:
- C++
helpviewer_keywords:
- pragmas, code_seg
- code_seg pragma
ms.assetid: bf4faac1-a511-46a6-8d9e-456851d97d56
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: ae4c8834609552c469eff8ca382a4e14ca077cfd
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46428187"
---
# <a name="codeseg"></a>code_seg
Specifica il segmento di testo in cui le funzioni vengono archiviate nel file OBJ.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma code_seg( [ [ { push | pop }, ] [ identifier, ] ] [ "segment-name" [, "segment-class" ] )  
```  
  
### <a name="paramters"></a>Parametri
  
**push**<br/>
(Facoltativo) Inserisce un record nello stack del compilatore interno. Oggetto **push** può avere un *identifier* e *nome segmento*.  
  
**pop**<br/>
(Facoltativo) Rimuove un record dall'inizio dello stack del compilatore interno.  
  
*identifier*<br/>
(Facoltativo) Quando abbinata **push**, assegna un nome al record nello stack del compilatore interno. Quando abbinata **pop**, estrae record dallo stack interno finché *identificatore* viene rimosso; se *identificatore* non viene trovato nello stack interno, nulla viene estratto.  
  
*Identificatore* consente di visualizzare con un solo record più **pop** comando.  
  
"*-nome del segmento*"<br/>  
(Facoltativo) Il nome di un segmento. Quando abbinata **pop**, viene visualizzato lo stack e *-nome del segmento* diventa il nome del segmento di testo attivo.  
  
"*-classe di segmento*"<br/>
(Facoltativo) Ignorato, ma incluso per compatibilità con le versioni di C++ precedenti alla versione 2.0.  
  
## <a name="remarks"></a>Note  
 
Il **code_seg** direttiva pragma non controlla il posizionamento del codice oggetto generato per istanziati modelli, né il codice generato in modo implicito dal compilatore, ad esempio, le funzioni membro speciali. È consigliabile usare il [__declspec(code_seg(...)) ](../cpp/code-seg-declspec.md) attributo poiché consente il controllo di selezione host di tutto il codice oggetto. È incluso il codice generato dal compilatore.  
  
Oggetto *segmento* in obj un file è un blocco denominato di dati che viene caricati in memoria come unità. Oggetto *segmento di testo* è un segmento contenente codice eseguibile. In questo articolo i termini *segmento* e *sezione* vengono usati indifferentemente.  
  
Il **code_seg** direttiva pragma indica al compilatore di inserire tutto il codice oggetto successivo dall'unità di conversione in un segmento di testo denominato *-nome del segmento*. Per impostazione predefinita, il segmento di testo utilizzato per le funzioni in un file OBJ viene denominato .text.  
  
Oggetto **code_seg** direttiva pragma senza parametri Reimposta il nome del segmento di testo per il codice oggetto successivo su. Text.  

È possibile usare il [DUMPBIN. File EXE](../build/reference/dumpbin-command-line.md) dell'applicazione per visualizzare i file con estensione obj. Versioni di DUMPBIN per ogni architettura di destinazione supportati sono incluse con Visual Studio.  
  
## <a name="example"></a>Esempio  

Questo esempio illustra come usare il **code_seg** direttiva pragma per controllare il posizionamento di codice oggetto:  
  
```cpp  
// pragma_directive_code_seg.cpp  
void func1() {                  // stored in .text  
}  
  
#pragma code_seg(".my_data1")  
void func2() {                  // stored in my_data1  
}  
  
#pragma code_seg(push, r1, ".my_data2")  
void func3() {                  // stored in my_data2  
}  
  
#pragma code_seg(pop, r1)      // stored in my_data1  
void func4() {  
}  
  
int main() {  
}  
```  
  
Per un elenco di nomi che non deve essere utilizzato per creare una sezione, vedere [/Section](../build/reference/section-specify-section-attributes.md).  
  
È anche possibile specificare le sezioni per i dati inizializzati ([data_seg](../preprocessor/data-seg.md)), dati non inizializzati ([bss_seg](../preprocessor/bss-seg.md)) e le variabili const ([const_seg](../preprocessor/const-seg.md)).  
  
## <a name="see-also"></a>Vedere anche  
 
[code_seg (__declspec)](../cpp/code-seg-declspec.md)<br/>
[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)