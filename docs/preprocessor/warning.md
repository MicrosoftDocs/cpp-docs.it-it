---
title: avviso | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- warning_CPP
- vc-pragma.warning
dev_langs: C++
helpviewer_keywords:
- pragmas, warning
- push pragma warning
- pop warning pragma
- warning pragma
ms.assetid: 8e9a0dec-e223-4657-b21d-5417ebe29cc8
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 275ca0a1101141ef1c0f4217597a644a6dbd8c46
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="warning-pragma"></a>Warning (pragma)
Consente la modifica selettiva del comportamento dei messaggi di avviso del compilatore.  
  
## <a name="syntax"></a>Sintassi  
  
```
#pragma warning(   
    warning-specifier : warning-number-list [; warning-specifier : warning-number-list...] )  
#pragma warning( push[ ,n ] )  
#pragma warning( pop )  
```  
  
## <a name="remarks"></a>Note  
Sono disponibili i seguenti parametri identificatore-avviso.  
  
|identificatore-avviso|Significato|  
|------------------------|-------------|  
|`1, 2, 3, 4`|Applica il livello specificato agli avvisi specificati. In questo modo viene anche abilitato un avviso specificato disattivato per impostazione predefinita.|  
|`default`|Reimposta il comportamento dell'avviso sul valore predefinito. In questo modo viene anche abilitato un avviso specificato disattivato per impostazione predefinita. L'avviso verrà generato nel suo livello predefinito e documentato.<br /><br /> Per ulteriori informazioni, vedere [gli avvisi del compilatore disattivati per impostazione predefinita](../preprocessor/compiler-warnings-that-are-off-by-default.md).|  
|`disable`|Non genera i messaggi di avviso specificati.|  
|`error`|Segnala gli avvisi specificati come errori.|  
|`once`|Visualizza i messaggi specificati solo una volta.|  
|`suppress`|Inserisce lo stato corrente del pragma nello stack, disabilita l'avviso specificato per la riga successiva, quindi estrae lo stack di avvisi in modo che venga ripristinato lo stato del pragma.|  
  
 Nell'istruzione di codice seguente viene illustrato che un parametro `warning-number-list` può contenere più numeri di avviso e che è possibile specificare più parametri `warning-specifier` nella stessa direttiva pragma.  
  
```cpp  
#pragma warning( disable : 4507 34; once : 4385; error : 164 )  
```  
  
 Tale istruzione dal punto di vista funzionale equivale al codice riportato di seguito:  
  
```cpp  
// Disable warning messages 4507 and 4034.  
#pragma warning( disable : 4507 34 )  
  
// Issue warning 4385 only once.  
#pragma warning( once : 4385 )  
  
// Report warning 4164 as an error.  
#pragma warning( error : 164 )  
```  
  
 Il compilatore aggiunge 4000 a qualsiasi numero di avviso compreso tra 0 e 999.  
  
 Per i numeri di avviso compresi tra 4700 e 4999, che sono quelli associati alla generazione del codice, lo stato dell'avviso attivo al momento della rilevazione della parentesi graffa di apertura di una funzione da parte del compilatore sarà attivo per il resto della funzione. L'utilizzo del pragma `warning` della funzione per modificare lo stato di un avviso con un numero maggiore di 4699 avrà effetto solo dopo la fine della funzione. Nell'esempio seguente viene illustrata la posizione corretta dei pragma `warning` per disabilitare e quindi ripristinare un messaggio di avviso di generazione di codice.  
  
```cpp  
// pragma_warning.cpp  
// compile with: /W1  
#pragma warning(disable:4700)  
void Test() {  
   int x;  
   int y = x;   // no C4700 here  
   #pragma warning(default:4700)   // C4700 enabled after Test ends  
}  
  
int main() {  
   int x;  
   int y = x;   // C4700  
}  
```  
  
 Si noti che in un corpo della funzione, l'ultima impostazione del pragma `warning` verrà applicata all'intera funzione.  
  
## <a name="push-and-pop"></a>Push e pull  
 Il `warning` pragma supporta anche la sintassi seguente, dove `n` rappresenta un livello di avviso (da 1 a 4).  
  
 `#pragma warning( push [ , n ] )`  
  
 `#pragma warning( pop )`  
   
 Il pragma `warning( push )` archivia lo stato di avviso corrente per ogni avviso. Il pragma `warning( push, n )` archivia lo stato corrente per ogni avviso e imposta il livello di avviso globale su `n`.  
  
 Il pragma `warning( pop )` estrae l'ultimo stato di avviso inserito nello stack. Tutte le modifiche apportate allo stato dell'avviso tra `push` e `pop` vengono annullate. Si consideri l'esempio seguente:  
  
```cpp  
#pragma warning( push )  
#pragma warning( disable : 4705 )  
#pragma warning( disable : 4706 )  
#pragma warning( disable : 4707 )  
// Some code  
#pragma warning( pop )   
```  
  
 Alla fine di questo codice, `pop` ripristina per ogni avviso (inclusi 4705, 4706 e 4707) lo stato esistente all'inizio del codice.  
  
 Quando si scrivono i file di intestazione, è possibile utilizzare `push` e `pop` per garantire che le modifiche dello stato dell'avviso apportate da un utente non impediscano la compilazione corretta delle intestazioni. Utilizzare `push` all'inizio dell'intestazione e `pop` alla fine. Ad esempio, se si dispone di un'intestazione che non viene compilata correttamente al livello di avviso 4, il codice riportato di seguito imposta il livello di avviso su 3, quindi ripristina il livello di avviso originale alla fine dell'intestazione.  
  
```cpp  
#pragma warning( push, 3 )  
// Declarations/definitions  
#pragma warning( pop )   
```  
  
 Per ulteriori informazioni sul compilatore opzioni che consentono di eliminare gli avvisi, vedere [/FI](../build/reference/fi-name-forced-include-file.md) e [/w](../build/reference/compiler-option-warning-level.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)