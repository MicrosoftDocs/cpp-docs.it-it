---
title: Grammatica BNF Microsoft Macro Assembler
description: Descrizione BNF di MASM per x64.
ms.date: 12/17/2019
helpviewer_keywords:
- MASM (Microsoft Macro Assembler), BNF reference
ms.openlocfilehash: 29eae0b110f99f1f417e153f18aa2ac3aff5c69b
ms.sourcegitcommit: 0781c69b22797c41630601a176b9ea541be4f2a3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75322806"
---
# <a name="microsoft-macro-assembler-bnf-grammar"></a>Grammatica BNF Microsoft Macro Assembler

Questa pagina contiene una descrizione BNF della grammatica MASM. Viene fornito come supplemento agli argomenti di riferimento e non è garantito che sia completo. Per informazioni complete su parole chiave, parametri, operazioni e così via, vedere gli argomenti di riferimento.

Per illustrare l'uso della BNF, il diagramma seguente illustra la definizione della direttiva TYPEDEF, a partire da *typedefDir*non terminale.

![Esempio di BNF di MASM](media/bnf.png)

Le voci sotto ogni parentesi graffa orizzontale sono terminali (ad esempio **NEAR16**, **NEAR32**, **Far16**e **far32**) o non terminali (ad esempio *qualificatore*, *qualifiedType*, *distanza*e *protoSpec*) che possono essere definiti ulteriormente. Ogni non terminale in corsivo nella definizione *typedefDir* è anche una voce della BNF. Tre punti verticali indicano una definizione di branching per un non terminale che, per motivi di semplicità, questa figura non illustra.

La grammatica BNF consente le definizioni ricorsive. Ad esempio, la grammatica utilizza qualifiedType come possibile definizione per qualifiedType, che è anche un componente della definizione per il qualificatore. Il simbolo "|" specifica una scelta tra le espressioni alternative, ad esempio *endOfLine* | *Commento*. Le doppie parentesi graffe specificano un parametro facoltativo, ad esempio ⟦ *macroParmList* ⟧. Le parentesi quadre non vengono effettivamente visualizzate nel codice sorgente.

## <a name="masm-nonterminals"></a>Non terminali MASM

*;;* \
&nbsp;&nbsp;&nbsp;&nbsp;*endOfLine* | *Commento*

*= Dir*\
&nbsp;&nbsp;&nbsp;&nbsp;*id* = *immExpr* ;;

\ *addOp*
&nbsp;&nbsp;&nbsp;&nbsp;+ | -

\ *aExpr*
&nbsp;&nbsp;&nbsp;*termine* *&nbsp; | * *aExpr*

\ *alti*
&nbsp;&nbsp;&nbsp;*id* &nbsp;

\ *arbitraryText*
&nbsp;&nbsp;&nbsp;&nbsp;*Chart*

\ *asmInstruction*
&nbsp;&nbsp;&nbsp;&nbsp;*mnemonico* ⟦ *⟧*

\ *assumeDir*
&nbsp;&nbsp;&nbsp;&nbsp;**presuppone** la *presupporre* ;; \
&nbsp;&nbsp;&nbsp;&nbsp;| **non presupporre nulla** ;;

\ di *presupporre*
&nbsp;&nbsp;&nbsp;&nbsp;*assumeRegister* |  *assumeRegister*\

\ *assumeReg*
&nbsp;&nbsp;&nbsp;*registro* &nbsp;: *assumeVal*

\ *assumeRegister*
&nbsp;&nbsp;&nbsp;&nbsp;*assumeSegReg* | *assumeReg*

\ *assumeSegReg*
&nbsp;&nbsp;&nbsp;&nbsp;*segmentRegister* : *assumeSegVal*

\ *assumeSegVal*
&nbsp;&nbsp;&nbsp;&nbsp;*frameExpr* | **Nessun** **errore** | 

\ *assumeVal*
&nbsp;&nbsp;&nbsp;&nbsp;*qualifiedType* | **Nessun** **errore** | 

\ *bcdConst*
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *Sign* ⟧ *decNumber*

\ *binaryOp*
&nbsp;&nbsp;&nbsp;&nbsp;= = |! = | > = | < = | > | < | &

\ *bitDef*
&nbsp;&nbsp;&nbsp;&nbsp;*bitFieldId* : *BitFieldSize* ⟦ = *constExpr* ⟧

\ *bitDefList*
&nbsp;&nbsp;&nbsp;&nbsp;*bitDef* | *bitDefList* , ⟦;; *bitDef* ⟧

\ *bitFieldId*
&nbsp;&nbsp;&nbsp;*id* &nbsp;

\ *bitFieldSize*
&nbsp;&nbsp;&nbsp;&nbsp;*constExpr*

\ *blockStatements*
&nbsp;&nbsp;&nbsp;&nbsp;di *direttive*\
&nbsp;&nbsp;&nbsp;&nbsp;|  **. CONTINUA** **. Se** *cExpr* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;|  **. INTERROMPi** ⟦ **. Se** *cExpr* ⟧

*bool*\
&nbsp;&nbsp;&nbsp;&nbsp;**TRUE** | **false**

\ *byteRegister*
&nbsp;&nbsp;&nbsp;&nbsp;AL | AH | CL | CH | DL | DH | BL | BH | R8B | R9B | R10B | R11B | R12B | R13B | R14B | R15B

\ *cExpr*
&nbsp;&nbsp;&nbsp;&nbsp;*aExpr* | *cExpr* || *aExpr*

\ *caratteri*
&nbsp;&nbsp;&nbsp;&nbsp;qualsiasi carattere con ordinale nell'intervallo compreso tra 0 e 255, ad eccezione di avanzamento riga (10).

\ *char*
&nbsp;&nbsp;&nbsp;carattere *&nbsp;carattere* | *char*

\ *NomeClasse*
&nbsp;&nbsp;&nbsp;*stringa* &nbsp;

\ *commDecl*
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *nearfar* ⟧ ⟦ *langType* ⟧ *:* *commType*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦: *constExpr* ⟧

\ *commDir*
&nbsp;&nbsp;&nbsp;&nbsp;**COMM**\
&nbsp;&nbsp; *&nbsp;&nbsp;.*

\ *Commenti*
&nbsp;&nbsp;&nbsp;&nbsp;; *testo* ;;

\ *commentDir*
&nbsp;&nbsp;&nbsp;*delimitatore* di **Commento** &nbsp;\
&nbsp;&nbsp;&nbsp;*testo* &nbsp;\
&nbsp;&nbsp;&nbsp;*testo* *delimitatore* &nbsp;*testo* ;;

\ *comu*
&nbsp;&nbsp;&nbsp;&nbsp;*commDecl* | *comma* , *commDecl*

\ *commType*
&nbsp;&nbsp;&nbsp;*tipo* di &nbsp; | *constExpr*

\ *costante*
&nbsp;&nbsp;&nbsp;&nbsp;*cifre* ⟦ *radixOverride* ⟧

\ *constExpr*
&nbsp;&nbsp;&nbsp;&nbsp;*expr*

\ *contextDir*
&nbsp;&nbsp;&nbsp;&nbsp;**PushContext** *contextItemList* ;; \
&nbsp;&nbsp;&nbsp;&nbsp;**PopContext** *contextItemList* ;;

\ *contextItem*
&nbsp;&nbsp;&nbsp;&nbsp;**presuppone** |  | **radice** | **elenco** ** | ** **CPU**

\ *contextItemList*
&nbsp;&nbsp;&nbsp;&nbsp;*contextItem* | *contextItemList* , *contextItem*

\ *controlBlock*
&nbsp;&nbsp;&nbsp;&nbsp;*whileBlock* | *repeatBlock*

\ *controlDir*
&nbsp;&nbsp;&nbsp;&nbsp;*controlIf* | *controlBlock*

\ *controlElseif*
&nbsp;&nbsp;&nbsp;&nbsp; **. ELSEIF** &nbsp;&nbsp;&nbsp;&nbsp;*cExpr* ;; \
&nbsp;&nbsp;&nbsp;&nbsp;di *direttive* \
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *controlElseif* ⟧

\ *controlIf*
&nbsp;&nbsp;&nbsp;&nbsp; **. SE** &nbsp;&nbsp;&nbsp;&nbsp;*cExpr* ;; \
&nbsp;&nbsp;&nbsp;&nbsp;di *direttive*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *controlElseif* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;⟦ **. ELSE** ;; \
&nbsp;&nbsp;&nbsp;&nbsp;[*Directive*⟧ \
&nbsp;&nbsp;&nbsp;&nbsp; **. ENDIF** ;;

\ del *coprocessore*
&nbsp;&nbsp;&nbsp;&nbsp;. 8087 |. 287 |. 387 |. NO87

\ *crefDir*
&nbsp;&nbsp;&nbsp;&nbsp;*crefOption* ;;

\ *crefOption*
&nbsp;&nbsp;&nbsp;&nbsp; **.\ CREF**
&nbsp;&nbsp;&nbsp;&nbsp;|  **. XCREF** ⟦ *idlist* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;|  **. NOCREF** ⟦ *idlist* ⟧

\ *cxzExpr*
&nbsp;&nbsp;&nbsp;&nbsp;*expr*\
&nbsp;&nbsp;&nbsp;&nbsp;|! *expr*\
&nbsp;&nbsp;&nbsp;&nbsp;| *expr* = = expr \
&nbsp;&nbsp;&nbsp;&nbsp;| *expr* ! = expr

\ *dataDecl*
&nbsp;&nbsp;&nbsp;database &nbsp;| DW | DD | DF | DQ | DT | *tipo* di dati | *typeid*

\ *DATADIR*
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *ID* ⟧ *DataItem* ;;

\ *DataItem*
&nbsp;&nbsp;&nbsp;&nbsp;*dataDecl* *scalarInstList*\
&nbsp;&nbsp;&nbsp;&nbsp;| *structTag* *structInstList*\
&nbsp;&nbsp;&nbsp;&nbsp;| *typeid* *structInstList*\
&nbsp;&nbsp;&nbsp;&nbsp;| *unionTag* *structInstList*\
&nbsp;&nbsp;&nbsp;&nbsp;| *recordTag* *recordInstList*

\ *DataType*
&nbsp;&nbsp;&nbsp;&nbsp;BYTE | SBYTE | PAROLA | SPADA | DWORD | SDWORD | FWORD | QWORD | SQWORD | TBYTE | OWORD | REAL4 | REAL8 | REAL10 | MMWORD | XMMWORD | YMMWORD

\ *decdigit*
&nbsp;&nbsp;&nbsp;&nbsp;0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9

\ *decNumber*
&nbsp;&nbsp;&nbsp;&nbsp;*decdigit*\
&nbsp;&nbsp;&nbsp;&nbsp;| *decNumber* *decdigit*

\ *delimitatore*
&nbsp;&nbsp;&nbsp;&nbsp;qualsiasi carattere ad eccezione di *whiteSpaceCharacter*

*cifre*\
&nbsp;&nbsp;&nbsp;&nbsp;*decdigit*\
&nbsp;&nbsp;&nbsp;&nbsp;| *cifre* *decdigit*\
&nbsp;&nbsp;&nbsp;&nbsp;| *cifre* hexdigit

\ di *direttiva*
&nbsp;&nbsp;&nbsp;&nbsp;*generalDir* | *segmentDef*

\ di *direttive*
&nbsp;&nbsp;&nbsp;direttiva *&nbsp;* Directive * | *

\ *distanza*
&nbsp;&nbsp;&nbsp;&nbsp;*nearfar* | **NEAR16** | **NEAR32** | **Far16** | **far32**

\ *E01*
&nbsp;&nbsp;&nbsp;&nbsp;E01 *orOp* *E02* | *E02*

\ *E02*
&nbsp;&nbsp;&nbsp;&nbsp;E02 **e** *E03* | *E03*

\ *E03*
&nbsp;&nbsp;&nbsp;&nbsp;**non** *E04* | *E04*

\ *E04*
&nbsp;&nbsp;&nbsp;&nbsp;*E04* *relOp* *E05* | *E05*

\ *E05*
&nbsp;&nbsp;&nbsp;&nbsp;*E05* *addOp* *E06* | *E06*

\ *E06*
&nbsp;&nbsp;&nbsp;&nbsp;*E06* *mulOp* *e07* | *E06* *shiftOp* *E07* | *E07*

\ *E07*
&nbsp;&nbsp;&nbsp;&nbsp;*E07* *addOp* *E08* | *E08*

\ *E08*
&nbsp;&nbsp;&nbsp;&nbsp; *E09* elevata\
&nbsp;&nbsp;&nbsp;&nbsp;|  *E09* basso\
&nbsp;&nbsp;&nbsp;&nbsp;| **HIGHWORD** *E09*\
&nbsp;&nbsp;&nbsp;&nbsp;| **LOWWORD** *E09*\
&nbsp;&nbsp;&nbsp;&nbsp;| *E09*

\ *E09*
&nbsp;&nbsp;&nbsp;**OFFSET** &nbsp;*E10*\
&nbsp;&nbsp;&nbsp;&nbsp;| **SEG** *E10*\
&nbsp;&nbsp;&nbsp;&nbsp;| **LROFFSET** *E10*\
&nbsp;&nbsp;&nbsp;&nbsp;| **tipo** *E10*\
&nbsp;&nbsp;&nbsp;&nbsp;| **questo** *E10*\
&nbsp;&nbsp;&nbsp;&nbsp;| *E09* **ptr** *E10*\
&nbsp;&nbsp;&nbsp;&nbsp;| *E09* : *E10*\
&nbsp;&nbsp;&nbsp;&nbsp;| *E10*

\ *E10*
&nbsp;&nbsp;&nbsp;&nbsp;*E10* . \ *E11*
&nbsp;&nbsp;&nbsp;&nbsp;| *E10* ⟦ *expr* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;| *E11*

\ *E11*
&nbsp;&nbsp;&nbsp;&nbsp;( *expr* ) \
&nbsp;&nbsp;&nbsp;&nbsp;| ⟦ *expr* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;|  *ID* larghezza\
&nbsp;&nbsp;&nbsp;&nbsp;| **mask** *ID*\
&nbsp;&nbsp;&nbsp;&nbsp;| **dimensioni** *sizeArg*\
&nbsp;&nbsp;&nbsp;&nbsp;| **sizeof** *sizeArg*\
&nbsp;&nbsp;&nbsp;&nbsp;|  *ID* lunghezza\
&nbsp;&nbsp;&nbsp;&nbsp;|  *ID* LENGTHOF\
&nbsp;&nbsp;&nbsp;&nbsp;| *recordConst*\
&nbsp;&nbsp;&nbsp;&nbsp;| *stringa*\
&nbsp;&nbsp;&nbsp;&nbsp;| *costante*\
&nbsp;&nbsp;&nbsp;*tipo* di | &nbsp;\
&nbsp;&nbsp;&nbsp;&nbsp;| *id*\
&nbsp;&nbsp;&nbsp;&nbsp;| **$**\
&nbsp;&nbsp;&nbsp;&nbsp;| *segmentRegister*\
&nbsp;&nbsp;&nbsp;&nbsp;| *register*\
&nbsp;&nbsp;&nbsp;&nbsp;| **ST**\
&nbsp;&nbsp;&nbsp;&nbsp;| **St** ( *expr* )

\ *echoDir*
&nbsp;&nbsp;&nbsp;&nbsp;**ECHO**\
&nbsp;&nbsp;&nbsp;&nbsp;*arbitraryText* ;; \
%**out** *arbitraryText* ;; \

\ *elseifBlock*
&nbsp;&nbsp;&nbsp;&nbsp;*elseifStatement* ;; \
&nbsp;&nbsp;&nbsp;&nbsp;di *direttive*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *elseifBlock* ⟧ \

\ *elseifStatement*
&nbsp;&nbsp;&nbsp;&nbsp;**ElseIf** *constExpr*\
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFE** *constExpr*\
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFB** *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFNB** *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;|  *ID* ELSEIFDEF (\
&nbsp;&nbsp;&nbsp;&nbsp;|  *ID* ELSEIFNDEF (\
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFDIF** *textItem* , *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFDIFI** *textItem* , *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFIDN** *textItem* , *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIFIDNI** *textItem* , *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIF1**\
&nbsp;&nbsp;&nbsp;&nbsp;| **ELSEIF2**

\ *endDir*
&nbsp;&nbsp;&nbsp;&nbsp;**end** ⟦ *immExpr* ⟧;;

\ *endpDir*
&nbsp;&nbsp;&nbsp;&nbsp;*procId* **ENDP** ;;

\ *endsDir*
&nbsp;&nbsp;&nbsp;*id* &nbsp;**termina** ;;

\ *equDir*
&nbsp;&nbsp;&nbsp;&nbsp;*textMacroId* **EQU** *equType* ;;

\ *equType*
&nbsp;&nbsp;&nbsp;&nbsp;*immExpr* | *textLiteral*

\ *errorDir*
&nbsp;&nbsp;&nbsp;&nbsp;*errorOpt* ;;

\ *errorOpt*
&nbsp;&nbsp;&nbsp;&nbsp; **. ERR** ⟦ *textItem* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;|  **. ERRE** *constExpr* ⟦ *optText* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;|  **. ERRNZ** *constExpr* ⟦ *optText* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;|  **. ERRB** *textItem* ⟦ *optText* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;|  **. ERRNB** *textItem* ⟦ *optText* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;|  **.**  *ID* ERRDEF ⟦ *optText* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;|  **.**  *ID* ERRNDEF ⟦ *optText* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;|  **. ERRDIF** *textItem* , *textItem* ⟦ *optText* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;|  **. ERRDIFI** *textItem* , *textItem* ⟦ *optText* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;|  **. ERRIDN** *textItem* , *textItem* ⟦ *optText* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;|  **. ERRIDNI** *textItem* , *textItem* ⟦ *optText* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;|  **. ERR1** ⟦ *textItem* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;|  **. ERR2** ⟦ *textItem* ⟧

\ *exitDir*
&nbsp;&nbsp;&nbsp;&nbsp; **. USCIRE** &nbsp;&nbsp;&nbsp;&nbsp;⟦ *expr* ⟧;;

\ *exitmDir*
&nbsp;&nbsp;&nbsp;&nbsp;: EXITt | *TextItem* di uscita

\ *esponente*
&nbsp;&nbsp;&nbsp;&nbsp;E ⟦ *Sign* ⟧ *decNumber*

*expr*\
&nbsp;&nbsp;&nbsp;&nbsp; *E05* breve\
&nbsp;&nbsp;&nbsp;&nbsp;|  **. DIGITARE** E01 \
&nbsp;&nbsp;&nbsp;&nbsp;| **OPATTR** *E01*\
&nbsp;&nbsp;&nbsp;&nbsp;| *E01*

\ di *espressione*
&nbsp;&nbsp;&nbsp;&nbsp;*expr* | *espr* , *expr*

\ *externDef*
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *langType* ⟧ *ID* ⟦ ( *altid* ) ⟧: *externType*

\ *externDir*
&nbsp;&nbsp;&nbsp;&nbsp;*externKey* *extern* ;;

\ *externKey*
&nbsp;&nbsp;&nbsp;&nbsp;**EXTRN** | **extern** | **EXTERNDEF**

\ *extern*
&nbsp;&nbsp;&nbsp;&nbsp;*externDef* | *externe* , ⟦;; *externDef* ⟧

\ *externType*
&nbsp;&nbsp;&nbsp;&nbsp;**ABS** | *qualifiedType*

\ *fieldAlign*
&nbsp;&nbsp;&nbsp;&nbsp;*constExpr*

\ *fieldInit*
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *initValue* ⟧ | *structInstance*

\ *fieldInitList*
&nbsp;&nbsp;&nbsp;&nbsp;*fieldInit* | *fieldInitList* , ⟦;; *fieldInit* ⟧

\ *Filechar*
&nbsp;&nbsp;&nbsp;*delimitatore* &nbsp;

\ *Filechar*
&nbsp;&nbsp;&nbsp;&nbsp;*filechar* | *filechar.* *filechar*

\ *filespec*
&nbsp;&nbsp;&nbsp;&nbsp;*Filechart* | *textLiteral*

*flagname*\
&nbsp;&nbsp;&nbsp;&nbsp;**zero?** | **Carry?** | **overflow?** | **firmare?** | **parità?**

\ *floatNumber*
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *Sign* ⟧ *decNumber* . ⟦ *decNumber* ⟧ ⟦ *esponente* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;| *cifre* R | *cifre* r

\ *forcDir*
&nbsp;&nbsp;&nbsp;&nbsp;**force** | **irpc**

\ *forDir*
&nbsp;&nbsp;&nbsp;&nbsp;**per** | **IRP**

\ *forParm*
&nbsp;&nbsp;&nbsp;&nbsp;*ID* ⟦: *forParmType* ⟧

\ *forParmType*
&nbsp;&nbsp;&nbsp;&nbsp;**req** | = *textLiteral*

\ *fpuRegister*
&nbsp;&nbsp;&nbsp;&nbsp;**St** *expr*

\ *frameExpr*
&nbsp;&nbsp;&nbsp;&nbsp;**SEG** *ID*\
&nbsp;&nbsp;&nbsp;&nbsp;| **DGROUP** : *ID*\
&nbsp;&nbsp;&nbsp;&nbsp;| *segmentRegister* : *ID*\
&nbsp;&nbsp;&nbsp;&nbsp;*id* | 

\ *generalDir*
&nbsp;&nbsp;&nbsp;&nbsp;*modelDir* | *segOrderDir* | *nameDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *includeLibDir* | *commentDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *groupDir* | *assumeDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *structDir* | *recordDir* | *typedefDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *externDir* | *publicDir* | *commDir* | *protoTypeDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *equDir* | = Dir |\ *textDir*
&nbsp;&nbsp;&nbsp;&nbsp;| *contextDir* | *optionDir* | *processorDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *radixDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *titleDir* | *pageDir* | *listDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *crefDir* | *echoDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *ifDir* | *errorDir* | *includeDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *macroDir* | *macroCall* | *macroRepeat* | *purgeDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *macroWhile* | *macroFor* | *macroForc*\
&nbsp;&nbsp;&nbsp;&nbsp;| *aliasDir*

\ *gpRegister*
&nbsp;&nbsp;&nbsp;&nbsp;AX | EAX | CX | ECX | DX | EDX | BX | EBX | DI | EDI | SI | ESI | BP | EBP | SP | ESP | RSP | R8W | R8D | R9W | R9D | R12D | R13W | R13D | R14W | R14D

\ *groupDir*
&nbsp;&nbsp;&nbsp;&nbsp; **gruppo** GroupID *segIdList*

\ *GroupID*
&nbsp;&nbsp;&nbsp;*id* &nbsp;

\ *hexdigit*
&nbsp;&nbsp;&nbsp;&nbsp;a | b | c | d | e | f | A | B | C | D | E | F

*id*\
&nbsp;&nbsp;&nbsp;&nbsp;il primo carattere dell'identificatore può essere un carattere alfabetico maiuscolo o minuscolo (`[A–Za-z]`) o uno di questi quattro caratteri: `@ _ $ ?` i caratteri rimanenti possono essere uno qualsiasi degli stessi caratteri o una cifra decimale (`[0–9]`). La lunghezza massima è di 247 caratteri.

\ *idlist*
&nbsp;&nbsp;&nbsp;&nbsp;*id* | *idlist* , *ID*

\ *ifDir*
&nbsp;&nbsp;&nbsp;&nbsp;*ifStatement* ;; \
&nbsp;&nbsp;&nbsp;&nbsp;di *direttive*\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *elseifBlock* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;⟦ **else** ;; \
&nbsp;&nbsp;&nbsp;&nbsp;*Directive* ⟧;; \

\ *ifStatement*
&nbsp;&nbsp;&nbsp;&nbsp;**se** *constExpr*\
&nbsp;&nbsp;&nbsp;&nbsp;| **IFE** *constExpr*\
&nbsp;&nbsp;&nbsp;&nbsp;| **IFB** *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **IFNB** *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;|  *ID* ifdef\
&nbsp;&nbsp;&nbsp;&nbsp;|  *ID* ifndef\
&nbsp;&nbsp;&nbsp;&nbsp;| **IFDIF** *textItem* , *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **IFDIFI** *textItem* , *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **IFIDN** *textItem* , *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **IFIDNI** *textItem* , *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **IF1**\
&nbsp;&nbsp;&nbsp;&nbsp;| **IF2**

\ *immExpr*
&nbsp;&nbsp;&nbsp;&nbsp;*expr*

\ *includeDir*
&nbsp;&nbsp;&nbsp;&nbsp;**includono** *filespec* ;;

\ *includeLibDir*
&nbsp;&nbsp;&nbsp;&nbsp;**INCLUDELIB (** *filespec* ;;

\ *initValue*
&nbsp;&nbsp;&nbsp;&nbsp;*immExpr*\
&nbsp;&nbsp;&nbsp;&nbsp;| *stringa*\
&nbsp;&nbsp;&nbsp;&nbsp;|? \
&nbsp;&nbsp;&nbsp;&nbsp;| *constExpr* **DUP** ( *scalarInstList* ) \
&nbsp;&nbsp;&nbsp;&nbsp;| *floatNumber*\
&nbsp;&nbsp;&nbsp;&nbsp;| *bcdConst*

\ *inSegDir*
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *labelDef* ⟧ *inSegmentDir*

\ *inSegDirList*
&nbsp;&nbsp;&nbsp;&nbsp;*inSegDir* | *inSegDirList* *inSegDir*

\ *inSegmentDir*
&nbsp;&nbsp;&nbsp;&nbsp;*istruzione*\
&nbsp;&nbsp;&nbsp;&nbsp;| *dataDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *controlDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *startupDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *exitDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *offsetDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *labelDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *procDir* ⟦ *localDirList* *⟧ ⟦ inSegDirList ⟧ endpDir* *\*
&nbsp;&nbsp;&nbsp;&nbsp;| *invokeDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *generalDir*

\ *instrPrefix*
&nbsp;&nbsp;&nbsp;&nbsp;**REP** | **REPE** | **REPZ** | **Repne** | **REPNZ** | **Lock**

\ *istruzioni*
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *instrPrefix* ⟧ *asmInstruction*

\ *invokeArg*
&nbsp;&nbsp;&nbsp;&nbsp;*Register* :: *register* | *expr* | **addr** *expr*

\ *invokeDir*
&nbsp;&nbsp;&nbsp;&nbsp;**Invoke** *expr* ⟦, ⟦;; ⟧ *Invoke* ⟧;;

\ *Invoke*
&nbsp;&nbsp;&nbsp;&nbsp;*invokeArg* | *Invoke* , ⟦;; *invokeArg* ⟧

*parola chiave*\
&nbsp;&nbsp;&nbsp;&nbsp;qualsiasi parola riservata.

\ di *parole* non
&nbsp;&nbsp;&nbsp;parola *chiave* &nbsp; * | parola* *chiave keyword*

\ *labelDef*
&nbsp;&nbsp;&nbsp;*id* &nbsp;: | *ID* :: | @@:

\ *labelDir*
&nbsp;&nbsp;&nbsp;&nbsp;*ID* **etichetta** *qualifiedType* ;;

\ *langType*
&nbsp;&nbsp;&nbsp;&nbsp;**C** | **PASCAL** | **FORTRAN** | **Basic** | **syscall** | **stdcall**

\ *listDir*
&nbsp;&nbsp;&nbsp;&nbsp;*listOption* ;;

\ *listOption*
&nbsp;&nbsp;&nbsp;&nbsp; **.\ elenco**
&nbsp;&nbsp;&nbsp;&nbsp;|  **. NOLIST**\
&nbsp;&nbsp;&nbsp;&nbsp;|  **.\ XLIST**
&nbsp;&nbsp;&nbsp;&nbsp;|  **.\ LISTALL**
&nbsp;&nbsp;&nbsp;&nbsp;|  **.\ LISTIF**
&nbsp;&nbsp;&nbsp;&nbsp;|  **.\ LFCOND**
&nbsp;&nbsp;&nbsp;&nbsp;|  **.\ NOLISTIF**
&nbsp;&nbsp;&nbsp;&nbsp;|  **.\ SFCOND**
&nbsp;&nbsp;&nbsp;&nbsp;|  **.\ TFCOND**
&nbsp;&nbsp;&nbsp;&nbsp;|  **.**  | LISTMACROALL **.\ Leo**
&nbsp;&nbsp;&nbsp;&nbsp;|  **.**  | NOLISTMACRO **.\**
&nbsp;&nbsp;&nbsp;&nbsp;|  **.**  | LISTMACRO **.\ XALL**

\ *localDef*
&nbsp;&nbsp;&nbsp;&nbsp; *idlist* locale;;

\ *localDir*
&nbsp;&nbsp;&nbsp;&nbsp; *parmList* locale;;

\ *localDirList*
&nbsp;&nbsp;&nbsp;&nbsp;*localDir* | *localDirList* *localDir*

\ di *impostazioni locali*
&nbsp;&nbsp;&nbsp;&nbsp;*localDef* | *local* *localDef*

\ *macroArg*
 % *constExpr*\
&nbsp;&nbsp;&nbsp;&nbsp;| %*textMacroId*\
&nbsp;&nbsp;&nbsp;&nbsp;| %*macroFuncId* ( *macroArgList* ) \
&nbsp;&nbsp;&nbsp;&nbsp;| *stringa*\
&nbsp;&nbsp;&nbsp;&nbsp;| *arbitraryText*\
&nbsp;&nbsp;&nbsp;&nbsp;| < *arbitraryText* >

\ *macroArgList*
&nbsp;&nbsp;&nbsp;&nbsp;*macroArg* | *macroArgList* , *macroArg*

\ *macroBody*
&nbsp;&nbsp;&nbsp; *&nbsp;⟦ ⟧* *macroStmtList*

\ *macroCall*
&nbsp;&nbsp;&nbsp;&nbsp;*ID* *macroArgList* ;; \
&nbsp;&nbsp;&nbsp;&nbsp;| *ID* ( *macroArgList* )

\ *macroDir*
&nbsp;&nbsp;&nbsp;&nbsp;*ID* **macro** ⟦ *macroParmList* ⟧;; \
&nbsp;&nbsp;&nbsp;&nbsp;*macroBody*\
&nbsp;&nbsp;&nbsp;&nbsp;**ENDM** ;;

\ *macroFor*
&nbsp;&nbsp;&nbsp;&nbsp;*forDir* *ForParm* < > *macroArgList* ;; \
&nbsp;&nbsp;&nbsp;&nbsp;*macroBody*\
&nbsp;&nbsp;&nbsp;&nbsp;**ENDM** ;;

\ *macroForc*
&nbsp;&nbsp;&nbsp;&nbsp;*forcDir* *ID* , *textLiteral* ;; \
&nbsp;&nbsp;&nbsp;&nbsp;*macroBody*\
&nbsp;&nbsp;&nbsp;&nbsp;**ENDM** ;;

\ *macroFuncId*
&nbsp;&nbsp;&nbsp;*id* &nbsp;

\ *macroId*
&nbsp;&nbsp;&nbsp;&nbsp;*macroProcId* | *macroFuncId*

\ *macroIdList*
&nbsp;&nbsp;&nbsp;&nbsp;*macroId* | *macroIdList* , *macroId*

\ *macroLabel*
&nbsp;&nbsp;&nbsp;*id* &nbsp;

\ *macroParm*
&nbsp;&nbsp;&nbsp;&nbsp;*ID* ⟦: *parmType* ⟧

\ *macroParmList*
&nbsp;&nbsp;&nbsp;&nbsp;*macroParm* | *macroParmList* , ⟦;; *macroParm* ⟧

\ *macroProcId*
&nbsp;&nbsp;&nbsp;*id* &nbsp;

\ *macroRepeat*
&nbsp;&nbsp;&nbsp;&nbsp;*repeatDir* *constExpr* ;; \
&nbsp;&nbsp;&nbsp;&nbsp;*macroBody*\
&nbsp;&nbsp;&nbsp;&nbsp;**ENDM** ;;

\ *macroStmt*
&nbsp;&nbsp;&nbsp;*direttiva* &nbsp; \
&nbsp;&nbsp;&nbsp;&nbsp;| *exitmDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| : *macroLabel*\
&nbsp;&nbsp;&nbsp;&nbsp;| **GOTO**\
&nbsp;&nbsp;&nbsp;&nbsp;*macroLabel*

\ *macroStmtList*
&nbsp;&nbsp;&nbsp;&nbsp;*macroStmt* ;; \
&nbsp;&nbsp;&nbsp;&nbsp;| *macroStmtList* *macroStmt* ;; \

\ *macroWhile*
&nbsp;&nbsp;&nbsp;&nbsp;**durante** *constExpr* ;; \
&nbsp;&nbsp;&nbsp;&nbsp;*macroBody*\
&nbsp;&nbsp;&nbsp;&nbsp;**ENDM** ;;

\ *mapType*
&nbsp;&nbsp;&nbsp;&nbsp;**tutti** | **nessuno** | **NOTPUBLIC**

\ *memOption*
&nbsp;&nbsp;&nbsp;&nbsp;**Tiny** | **small** | **medium** | **Compact** | **large** | **Gross | ** **Flat**

\ *mnemonico*
&nbsp;&nbsp;&nbsp;nome dell'istruzione &nbsp;.

\ *modelDir*
&nbsp;&nbsp;&nbsp;&nbsp; **.\ modello**
&nbsp;&nbsp;&nbsp;&nbsp;*memOption* ⟦, *modelOptlist* ⟧;;

\ *modelOpt*
&nbsp;&nbsp;&nbsp;&nbsp;*langType* | *stackOption*

\ *modelOptlist*
&nbsp;&nbsp;&nbsp;&nbsp;*modelOpt* | *modelOptlist* , *modelOpt*

\ *moduli*
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *Directive* ⟧ *endDir*

\ *mulOp*
&nbsp;&nbsp;&nbsp;&nbsp;\* | / | **Mod**

\ *nameDir*
&nbsp;&nbsp;&nbsp;**nome** &nbsp;\
&nbsp;&nbsp;&nbsp;*id* &nbsp;;; \

\ *nearfar*
&nbsp;&nbsp;&nbsp;&nbsp;**vicino** | **lontano**

\ *nestedStruct*
&nbsp;&nbsp;&nbsp;&nbsp;*structHdr* ⟦ *ID* ⟧;; \
&nbsp;&nbsp;&nbsp;&nbsp;*structBody*\
&nbsp;&nbsp;&nbsp;&nbsp;**termina** ;; \

\ *offsetDir*
&nbsp;&nbsp;&nbsp;&nbsp;*offsetDirType* ;;

\ *offsetDirType*
&nbsp;&nbsp;&nbsp;&nbsp;**anche** | **org** *immExpr* | **align** ⟦ *constExpr* ⟧

\ *offsetType*
&nbsp;&nbsp;&nbsp;**gruppo** &nbsp; | **segmento** | **Flat**

\ *oldRecordFieldList*
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *constExpr* ⟧ | *oldRecordFieldList* , ⟦ *constExpr* ⟧

\ *optionDir*
&nbsp;&nbsp;&nbsp;**opzione &nbsp;Option** *;;*

\ *optionItem*
&nbsp;&nbsp;&nbsp;&nbsp;**CASEMAP** : *mapType*\
&nbsp;&nbsp;&nbsp;&nbsp;| **DOTNAME** | **NODOTNAME**\
&nbsp;&nbsp;&nbsp;&nbsp;| **emulatore** | **noemulator**\
&nbsp;&nbsp;&nbsp;&nbsp;| **epilogo** : *macroId*\
&nbsp;&nbsp;&nbsp;&nbsp;| **EXPR16** | **EXPR32**\
&nbsp;&nbsp;&nbsp;&nbsp;**lingua** | : *langType*\
&nbsp;&nbsp;&nbsp;&nbsp;| **LJMP**
| **NOLJMP**\
&nbsp;&nbsp;&nbsp;&nbsp;| **M510** | **NOM510**\
&nbsp;&nbsp;&nbsp;&nbsp;| **NOKEYWORD** : < >\ di *parole* chiave
&nbsp;&nbsp;&nbsp;&nbsp;| **NOSIGNEXTEND**\
&nbsp;&nbsp;&nbsp;&nbsp;**OFFSET** | : *offsetType*\
&nbsp;&nbsp;&nbsp;&nbsp;| **OLDMACROS** | **NOOLDMACROS**\
&nbsp;&nbsp;&nbsp;&nbsp;| **OLDSTRUCTS** | **NOOLDSTRUCTS**\
&nbsp;&nbsp;&nbsp;&nbsp;| **proc** : *oVisibility*\
&nbsp;&nbsp;&nbsp;&nbsp;| **prologo** : *macroId*\
&nbsp;&nbsp;&nbsp;&nbsp;| **ReadOnly** | **noreadonly**\
&nbsp;&nbsp;&nbsp;&nbsp;| con **ambito** | **con ambito\**
&nbsp;&nbsp;&nbsp;&nbsp;**segmento** di | : *segSize*\
&nbsp;&nbsp;&nbsp;&nbsp;| **SETIF2** : bool

\ di *Opzioni*
&nbsp;&nbsp;&nbsp;&nbsp;*optionItem* | ( *opzione* ), ⟦;; *optionItem* ⟧

\ *optText*
&nbsp;&nbsp;&nbsp;&nbsp;, *textItem*

\ *orOp*
&nbsp;&nbsp;&nbsp;&nbsp;**o** | **Xor**

\ *oVisibility*
&nbsp;&nbsp;&nbsp;&nbsp;**pubblico** | **esportazione** **privata** | 

\ *pageDir*
&nbsp;&nbsp;&nbsp;&nbsp;**pagina** ⟦ *pageExpr* ⟧;;

\ *pageExpr*
&nbsp;&nbsp;&nbsp;&nbsp;\+ | ⟦ *pageLength* ⟧ ⟦, *PageWidth* ⟧

\ *pageLength*
&nbsp;&nbsp;&nbsp;&nbsp;*constExpr*

\ *PageWidth*
&nbsp;&nbsp;&nbsp;&nbsp;*constExpr*

\ di *parmigiana*
&nbsp;&nbsp;&nbsp;&nbsp;*parmId* ⟦: *qualifiedType* ⟧ | *parmId* ⟦ *constExpr* ⟧ ⟦: *qualifiedType* ⟧

\ *parmId*
&nbsp;&nbsp;&nbsp;*id* &nbsp;

\ *parmList*
&nbsp;&nbsp;&nbsp;&nbsp;*parmigiana* | *parmList* , ⟦;; ⟧ ( *parmigiana* )

\ *parmType*
&nbsp;&nbsp;&nbsp;&nbsp;**req** | = *textLiteral* | **vararg**

\ *pOptions*
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *distance* ⟧ ⟦ *langType* ⟧ ⟦ *oVisibility ⟧*

\ *primario*
&nbsp;&nbsp;&nbsp;&nbsp;*expr* *binaryOp* *expr* | *FlagName* | *expr*

\ *procDir*
&nbsp;&nbsp;&nbsp;&nbsp;*procId* **proc**\
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *pOptions* ⟧ ⟦ < *macroArgList* > ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *usesRegs* ⟧ ⟦ *procParmList* ⟧

\ *processore*
&nbsp;&nbsp;&nbsp;&nbsp;|. 386 |. 386P |. 486 |. 486P \
&nbsp;&nbsp;&nbsp;&nbsp;|. 586 |. 586P |. 686 |. 686P |. 387

\ *processorDir*
&nbsp;&nbsp;&nbsp;*processore* &nbsp;; \
&nbsp;&nbsp;&nbsp;&nbsp;| *coprocessore* ;;

\ *procId*
&nbsp;&nbsp;&nbsp;*id* &nbsp;

\ *Proclaming*
&nbsp;&nbsp;&nbsp;&nbsp;*instrPrefix* | *dataDir* | *labelDir* | *offsetDir* | *generalDir*

\ *procParmList*
&nbsp;&nbsp;&nbsp;&nbsp;⟦, ⟦;; ⟧ *parmList* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;⟦, ⟦;; ⟧ *parmId* : vararg ⟧

\ *protoArg*
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *ID* ⟧: *qualifiedType*

\ *protoArgList*
&nbsp;&nbsp;&nbsp;&nbsp;⟦, ⟦;; ⟧ *⟧* \
&nbsp;&nbsp;&nbsp;&nbsp;⟦, ⟦;; ⟧ ⟦ *ID* ⟧: vararg ⟧

\ di *protone*
&nbsp;&nbsp;&nbsp;&nbsp;*protoArg*\
&nbsp;&nbsp;&nbsp; *&nbsp;| ⟦* ;; *protoArg* ⟧

\ *protoSpec*
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *distance* ⟧ ⟦ *langType* ⟧ ⟦ *protoArgList ⟧ |* *typeid*

\ *protoTypeDir*
&nbsp;&nbsp;&nbsp;&nbsp;*ID* **proto** *protoSpec*

\ *pubDef*
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *langType* ⟧

\ *publicDir*
&nbsp;&nbsp;&nbsp;&nbsp;**public** *pubList* ;;

\ *pubList*
&nbsp;&nbsp;&nbsp;&nbsp;*pubDef* | *pubList* , ⟦;; *pubDef* ⟧

\ *purgeDir*
&nbsp;&nbsp;&nbsp;&nbsp;**Ripulisci** *macroIdList*

\ *qualifiedType*
&nbsp;&nbsp;&nbsp;*tipo* di &nbsp;| ⟦ *distance* ⟧ **ptr** ⟦ *qualifiedType* ⟧

*qualificatore*\
&nbsp;&nbsp;&nbsp;&nbsp;*qualifiedType* | **proto** *protoSpec*

\ *virgolette*
&nbsp;&nbsp;&nbsp;&nbsp;"|'

\ *qwordRegister*
&nbsp;&nbsp;&nbsp;&nbsp;RAX | RCX | RDX | RBX | RDI | RSI | RBP | R8 | R9 | R10 | R11 | R12 | R13 | R14 | R15

\ *radixDir*
&nbsp;&nbsp;&nbsp;&nbsp; **.**  *ConstExpr* radice;;

\ *radixOverride*
&nbsp;&nbsp;&nbsp;&nbsp;h | o | domande e risposte | t | y | H | O | Domande e risposte | T | Y

\ *recordConst*
&nbsp;&nbsp;&nbsp;&nbsp;*recordTag* { *oldRecordFieldList* } | *recordTag* < *oldRecordFieldList* >

\ *recordDir*
&nbsp;&nbsp;&nbsp;&nbsp; **record** recordTag *bitDefList* ;;

\ *recordFieldList*
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *constExpr* ⟧ | *recordFieldList* , ⟦;; ⟧ ⟦ *constExpr* ⟧

\ *recordInstance*
 {⟦;; ⟧ *recordFieldList* ⟦;; ⟧} \
&nbsp;&nbsp;&nbsp;&nbsp;| < *oldRecordFieldList* >\
&nbsp;&nbsp;&nbsp;&nbsp;| *constExpr* **DUP** ( *recordInstance* )

\ *recordInstList*
&nbsp;&nbsp;&nbsp;&nbsp;*recordInstance* | *recordInstList* , ⟦;; *recordInstance* ⟧

\ *recordTag*
&nbsp;&nbsp;&nbsp;*id* &nbsp;

*registra*\
&nbsp;&nbsp;&nbsp;&nbsp;*specialRegister* | *gpRegister* | *byteRegister* | *qwordRegister* |  *fpuRegister* | *SIMDRegister* | *segmentRegister*

\ di *Reglis*
&nbsp;&nbsp;&nbsp;&nbsp;*register* * | registro* *reglist*

\ *relOp*
&nbsp;&nbsp;&nbsp;&nbsp;EQ | NE | LT | LE | GT | GE

\ *repeatBlock*
&nbsp;&nbsp;&nbsp;&nbsp; **. Ripeti** ;; \
&nbsp;&nbsp;&nbsp;&nbsp;*blockStatements* ;; untilDir ;;

\ *repeatDir*
&nbsp;&nbsp;&nbsp;&nbsp;**REPEAT** | **REPT**

\ *scalarInstList*
&nbsp;&nbsp;&nbsp;&nbsp;*initValue* | *scalarInstList* , ⟦;; *initValue* ⟧

\ *segAlign*
&nbsp;&nbsp;&nbsp;&nbsp;**BYTE** | **Word** | **DWORD** | **para** | 

\ *segAttrib*
&nbsp;&nbsp;&nbsp;&nbsp;**STACK** | **pubblico** |  | di **memoria** | **comune** **in** *constExpr* | **privato**

\ *segDir*
&nbsp;&nbsp;&nbsp;&nbsp; **.** \ di codice
&nbsp;&nbsp;&nbsp;&nbsp;⟦ *segId* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;|  **.\ dati**
&nbsp;&nbsp;&nbsp;&nbsp;|   **. DATI?** \
&nbsp;&nbsp;&nbsp;&nbsp;|  **.\ CONSt**
&nbsp;&nbsp;&nbsp;&nbsp;|  **. FARDATA**⟦ *segId* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;|   **. FARDATA?** ⟦ *segId* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;|  **. STACK** ⟦ *constExpr* ⟧

\ *segId*
&nbsp;&nbsp;&nbsp;*id* &nbsp;

\ *segIdList*
&nbsp;&nbsp;&nbsp;&nbsp;*segId*\
&nbsp;&nbsp;&nbsp;&nbsp;| *segIdList* , *segId*

\ *segmentDef*
&nbsp;&nbsp;&nbsp;&nbsp;*segmentDir* ⟦ *inSegDirList* ⟧ *endsDir* | *simpleSegDir* ⟦ *inSegDirList* ⟧ ⟦ *endsDir* ⟧

\ *segmentDir*
&nbsp;&nbsp;&nbsp;&nbsp;*segId* **Segment** ⟦ *segOptionList* ⟧;;

\ *segmentRegister*
&nbsp;&nbsp;&nbsp;&nbsp;**CS** | **DS** | **ES** | **FS** | **GS** | **SS**

\ *segOption*
&nbsp;&nbsp;&nbsp;&nbsp;*segAlign*\
&nbsp;&nbsp;&nbsp;&nbsp;| *segRO*\
&nbsp;&nbsp;&nbsp;&nbsp;| *segAttrib*\
&nbsp;&nbsp;&nbsp;&nbsp;| *segSize*\
&nbsp;&nbsp;&nbsp;&nbsp;| *ClassName*

\ *segOptionList*
&nbsp;&nbsp;&nbsp;&nbsp;*segOption* | *segOptionList* *segOption*

\ *segOrderDir*
&nbsp;&nbsp;&nbsp;&nbsp; **.**  | alfa **.**  | seq **. DOSSEG (**  | **DOSSEG (**

\ *segRO*
&nbsp;&nbsp;&nbsp;&nbsp;**ReadOnly**

\ *segSize*
&nbsp;&nbsp;&nbsp;&nbsp;**USE16** | **USE32** | **Flat**

\ *shiftOp*
&nbsp;&nbsp;&nbsp;&nbsp;**SHR** | **SHL**

*firma*\
 - | +

\ *simdRegister*
&nbsp;&nbsp;&nbsp;&nbsp;MM0 | MM1 | MM2 | MM3 | MM4 | MM5 | MM6 | MM7 | xmmRegister | YMM0 | YMM1 | YMM2 | YMM3 | YMM4 | YMM5) | YMM6 | YMM7 | YMM8 | YMM9 | YMM10 | YMM11 | YMM12 | YMM13 | YMM14 | YMM15

\ *simpleExpr*
 ( *cExpr* ) | *primario*

\ *simpleSegDir*
&nbsp;&nbsp;&nbsp;&nbsp;*segDir* ;;

\ *sizeArg*
&nbsp;&nbsp;&nbsp;&nbsp;*id* | *tipo* | *E10*

\ *specialChars*
 : | . | ⟦ | ⟧ | ( | ) | < | > | { | } \
&nbsp;&nbsp;&nbsp;&nbsp;| + | - | / | * | & | % | !\
&nbsp;&nbsp;&nbsp;&nbsp;| ' | \ | = | ; | , | "\
&nbsp;&nbsp;&nbsp;&nbsp;| *whiteSpaceCharacter*\
&nbsp;&nbsp;&nbsp;&nbsp;| *endOfLine*

\ *specialRegister*
&nbsp;&nbsp;&nbsp;&nbsp;registro CR0 | CR2 | CR3 | DR0 | DR1 | DR2 | DR3 | DR6 | DR7 | TR3 | TR4 | TR5 | TR6 | TR7

\ *stackOption*
&nbsp;&nbsp;&nbsp;&nbsp;**NEARSTACK** | **FARSTACK**

\ *startupDir*
&nbsp;&nbsp;&nbsp;&nbsp; **. AVVIO** ;;

\ *sText*
&nbsp;&nbsp;&nbsp;&nbsp;*stringChar* | *sText* *stringChar*

*string*\
&nbsp;&nbsp;&nbsp;&nbsp;*quote* ⟦ *sText* ⟧

\ *stringChar*
&nbsp;&nbsp;&nbsp; *virgolette* &nbsp;Qualsiasi carattere eccetto le virgolette.

\ *structBody*
&nbsp;&nbsp;&nbsp;&nbsp;*structItem* ;; \
&nbsp;&nbsp;&nbsp;&nbsp;| *structBody* *structItem* ;;

\ *structDir*
&nbsp;&nbsp;&nbsp;&nbsp;*structTag* *structHdr* ⟦ *fieldAlign* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;⟦, non **univoco** ⟧;; \
&nbsp;&nbsp;&nbsp;&nbsp;*structBody*\
&nbsp;&nbsp;&nbsp;&nbsp;*structTag*\
&nbsp;&nbsp;&nbsp;&nbsp;**termina** ;;

\ *structHdr*
&nbsp;&nbsp;&nbsp;&nbsp;**strut** | **struct** | **Union**

\ *structInstance*
 < ⟦ *fieldInitList* ⟧ > \
&nbsp;&nbsp;&nbsp;&nbsp;| {⟦;; ⟧ ⟦ *fieldInitList* ⟧ ⟦;; ⟧} \
&nbsp;&nbsp;&nbsp;&nbsp;| *constExpr* **DUP** ( *structInstList* ) \

\ *structInstList*
&nbsp;&nbsp;&nbsp;&nbsp;*structInstance* | *structInstList* , ⟦;; *structInstance* ⟧

\ *structItem*
&nbsp;&nbsp;&nbsp;&nbsp;*dataDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *generalDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *offsetDir*\
&nbsp;&nbsp;&nbsp;&nbsp;| *nestedStruct*

\ *structTag*
&nbsp;&nbsp;&nbsp;*id* &nbsp;

\ *termini*
&nbsp;&nbsp;&nbsp;&nbsp;*simpleExpr* |! *simpleExpr*

*text*\
&nbsp;&nbsp;&nbsp;&nbsp;carattere di *testo* | *textLiteral* |! *testo* carattere | *carattere* |! *carattere*

\ *textDir*
&nbsp;&nbsp;&nbsp;&nbsp;*ID* *textMacroDir* ;;

\ *textItem*
&nbsp;&nbsp;&nbsp;&nbsp;*textLiteral* | *textMacroId* | % *constExpr*

\ *textLen*
&nbsp;&nbsp;&nbsp;&nbsp;*constExpr*

\ di *testo*
&nbsp;&nbsp;&nbsp;&nbsp;*textItem* | *texte* , ⟦;; *textItem* ⟧

\ *textLiteral*
&nbsp;&nbsp;&nbsp;&nbsp;< *testo* >;;

\ *textMacroDir*
&nbsp;&nbsp;&nbsp;&nbsp;**catstr (** ⟦ *⟧* \
&nbsp;&nbsp;&nbsp;&nbsp;| **TEXTEQU** ⟦ *⟧* \
&nbsp;&nbsp;&nbsp;&nbsp;| **SIZESTR (** *textItem*\
&nbsp;&nbsp;&nbsp;&nbsp;| **substr** *textItem* , *textStart* ⟦, *textLen* ⟧ \
&nbsp;&nbsp;&nbsp;&nbsp;| **InStr** ⟦ *TextStart* , ⟧ *textItem* , *textItem*

\ *textMacroId*
&nbsp;&nbsp;&nbsp;*id* &nbsp;

\ *textStart*
&nbsp;&nbsp;&nbsp;&nbsp;*constExpr*

\ *titleDir*
&nbsp;&nbsp;&nbsp;&nbsp;*titleType* *arbitraryText* ;;

\ *titleType*
&nbsp;&nbsp;&nbsp;**titolo** &nbsp; | **sottotitolo** | **SUBTTL**

*type*\
&nbsp;&nbsp;&nbsp;&nbsp;*structTag*\
&nbsp;&nbsp;&nbsp;&nbsp;| *unionTag*\
&nbsp;&nbsp;&nbsp;&nbsp;| *recordTag*\
&nbsp;&nbsp;&nbsp;&nbsp;| *distanza*\
&nbsp;&nbsp;&nbsp;&nbsp;| *dataType*\
&nbsp;&nbsp;&nbsp;&nbsp;| *typeid*

\ *typedefDir*
&nbsp;&nbsp;&nbsp;qualificatore **typedef** di &nbsp;*typeid*

*typeId*\
&nbsp;&nbsp;&nbsp;*id* &nbsp;

\ *unionTag*
&nbsp;&nbsp;&nbsp;*id* &nbsp;

\ *untilDir*
&nbsp;&nbsp;&nbsp;&nbsp; **. FINO a** *cExpr* ;; \
&nbsp;&nbsp;&nbsp;&nbsp; **. UNTILCXZ** ⟦ *cxzExpr* ⟧;;

\ *usesRegs*
&nbsp;&nbsp;&nbsp;&nbsp;**USA** *reglist*

\ *whileBlock*
&nbsp;&nbsp;&nbsp;&nbsp; **. DURANTE**\
&nbsp;&nbsp;&nbsp;&nbsp;*cExpr* ;; \
&nbsp;&nbsp;&nbsp;&nbsp;*blockStatements* ;; \
&nbsp;&nbsp;&nbsp;&nbsp; **. ENDW**

\ *whiteSpaceCharacter*
&nbsp;&nbsp;&nbsp;&nbsp;ASCII 8, 9, 11-13, 26, 32

\ *xmmRegister*
&nbsp;&nbsp;&nbsp;&nbsp;XMM0 | XMM1 | XMM2 | XMM3 | XMM4 | XMM5 | XMM6 | XMM7 | XMM8 | XMM9 | XMM10 | XMM11 | XMM12 | XMM13 | XMM14 | XMM15\

